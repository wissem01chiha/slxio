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

#pragma once

#include <QComboBox>
#include <QFrame>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPainter>
#include <QPaintEvent>
#include <QPushButton>
#include <QSizePolicy>
#include <QScrollArea>
#include <QStackedWidget>
#include <QStyle>
#include <QTabBar>
#include <QToolButton>
#include <QVector>
#include <QVBoxLayout>
#include <QWidget>

class DiagramPreview final : public QWidget
{
public:
    explicit DiagramPreview(int variant, QWidget* parent = nullptr)
        : QWidget(parent), m_variant(variant)
    {
        setMinimumHeight(98);
        setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    }

protected:
    void paintEvent(QPaintEvent*) override
    {
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.fillRect(rect(), Qt::white);

        const qreal midY = height() / 2.0;
        const qreal step = width() / 4.0;
        const QColor wireColor("#d5dce1");
        const QColor blue("#004073");
        const QColor orange("#d18a3d");
        const QColor paleBlue("#e6eff6");
        const QColor paleOrange("#fbf0e2");
        QPen wirePen(wireColor, 2);
        painter.setPen(wirePen);
        painter.drawLine(QPointF(step * 0.45, midY), QPointF(step * 3.55, midY));

        for (int i = 0; i < 4; ++i)
        {
            const qreal x = step * (0.5 + i * 0.9);
            const bool accent = (i + m_variant) % 3 == 0;
            const QRectF block(x - 15, midY - 12, 30, 24);
            painter.setPen(QPen(accent ? orange : blue, 2));
            painter.setBrush(accent ? paleOrange : paleBlue);
            painter.drawRoundedRect(block, 2, 2);

            if ((m_variant + i) % 2 == 0)
            {
                painter.setPen(QPen(wireColor, 1));
                painter.drawLine(block.left() + 6, midY, block.right() - 6, midY);
            }
        }

        painter.setPen(QPen(wireColor, 1));
        painter.setBrush(QColor("#f7f8f9"));
        painter.drawEllipse(QPointF(step * 0.35, midY), 5, 5);
        painter.drawEllipse(QPointF(step * 3.65, midY), 5, 5);

        if (m_variant % 2 == 0)
        {
            painter.setPen(QPen(blue, 2));
            painter.setBrush(Qt::white);
            painter.drawRect(QRectF(width() * 0.43, midY - 32, 38, 18));
            painter.drawLine(QPointF(width() * 0.5, midY - 14), QPointF(width() * 0.5, midY - 2));
        }
    }

private:
    int m_variant;
};