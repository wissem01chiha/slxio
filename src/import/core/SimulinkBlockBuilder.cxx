/*
 * Copyright 2026 Wissem Chiha
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "SimulinkBlockBuilder.h"
#include "SimulinkArrayBuilder.h"
#include "SimulinkObjectBuilder.h"
#include "SimulinkParameterBuilder.h"
#include "SLXParameter.h"
#include "SLXSection.h"

namespace slxio
{
    HError SimulinkBlockParser::parse()
    {
        SId id = (SId)0;
        std::string name;

        for (xmlAttrPtr attr = dataObject->properties; attr; attr = attr->next)
        {
            std::string attrName = reinterpret_cast<const char*>(attr->name);
            std::string attrValue =
                reinterpret_cast<const char*>(xmlNodeGetContent(attr->children));
            if (attrName == SlxParameter::PARAM_SID)
            {
                id = static_cast<SId>(std::stoul(attrValue));
            }
            else if (attrName == SlxParameter::PARAM_Name)
            {
                name = attrValue;
            }
            else if (attrName == SlxParameter::PARAM_BlockType)
            {
                SimulinkBlockType::Type blockType = SimulinkBlockType::toType(attrValue.c_str());
                ptr->setBlockType(blockType);
            }
            else
            {
                // l.log(Logger::V_WARNING, "unexpected attribute '", attrName,
        "' found in simulink block node.");
            }
        }
        ptr->setID(id);
        ptr->setName(name);

        for (xmlNodePtr nodePtr_ = dataObject->children; nodePtr_ != nullptr;
             nodePtr_ = nodePtr_->next)
        {
            if (nodePtr_->type == XML_ELEMENT_NODE &&
                xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Parameter) == 0)
            {
                std::unique_ptr<SimulinkParameterParser> parser(new SimulinkParameterParser());
                HError status = parser->setInputData(nodePtr_);
                if (status != E_OK)
                {
                    // l.log(Logger::V_ERROR,
          "SimulinkBlockParser:: failed to set input data "
          "for SimulinkParameterParser");
          continue;
                }
                HError parserStatus = parser->parse();
                if (parserStatus != E_OK)
                {
                    // l.log(Logger::V_ERROR,
          "SimulinkBlockParser:: failed to parse "
          "SimulinkParameterParser");
          continue;
                }
                ptr->AddElement(parser->getOutputData());
            }
        }

        return E_OK;
    }

    SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
