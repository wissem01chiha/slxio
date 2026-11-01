#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QComboBox>
#include <QFrame>
#include <QFileDialog>
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

#include "DiagramPreview.h"

namespace
{

struct TemplateInfo
{
    QString title;
    QString category;
};

QFrame* createTemplateCard(const TemplateInfo& info, int variant)
{
    auto* card = new QFrame;
    card->setObjectName("templateCard");
    card->setFrameShape(QFrame::StyledPanel);
    card->setStyleSheet(
        "QFrame#templateCard { background: white; border: 1px solid #c8c8c8; }"
        "QLabel#templateTitle { background: #f4f4f4; border-top: 1px solid #c8c8c8;"
        " padding: 7px 10px; font-weight: normal; }");
    card->setAccessibleName(info.title);

    auto* layout = new QVBoxLayout(card);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);
    layout->addWidget(new DiagramPreview(variant, card));

    auto* title = new QLabel(info.title, card);
    title->setObjectName("templateTitle");
    layout->addWidget(title);
    return card;
}

QWidget* createMessagePage(const QString& heading, const QString& message)
{
    auto* page = new QWidget;
    auto* layout = new QVBoxLayout(page);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(12);

    auto* title = new QLabel(heading, page);
    title->setStyleSheet("font-size: 18pt; color: #004073; font-weight: 600;");
    auto* description = new QLabel(message, page);
    description->setWordWrap(true);
    description->setStyleSheet("color: #666666;");
    layout->addWidget(title);
    layout->addWidget(description);
    layout->addStretch();
    return page;
}

} // namespace

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("Simcraft Start Page"));
    setMinimumSize(900, 600);
    resize(1280, 760);

    auto* rootLayout = new QVBoxLayout(ui->centralwidget);
    rootLayout->setContentsMargins(0, 0, 0, 0);
    rootLayout->setSpacing(0);

    auto* header = new QWidget(ui->centralwidget);
    header->setObjectName("header");
    header->setFixedHeight(66);
    header->setStyleSheet("#header { background: #004073; }");
    auto* headerLayout = new QHBoxLayout(header);
    headerLayout->setContentsMargins(24, 0, 20, 0);
    headerLayout->setSpacing(0);

    auto* brand = new QLabel(tr("Simcraft"), header);
    brand->setStyleSheet("color: white; font-size: 30pt; font-weight: 600; letter-spacing: 1px;");
    brand->setMinimumWidth(255);
    headerLayout->addWidget(brand);

    auto* tabBar = new QTabBar(header);
    tabBar->setExpanding(false);
    tabBar->setDrawBase(false);
    tabBar->addTab(tr("New"));
    tabBar->addTab(tr("Examples"));
    tabBar->addTab(tr("Learn"));
    tabBar->setStyleSheet(
        "QTabBar::tab { background: #e3e3e3; color: #444444; min-width: 115px;"
        " padding: 12px 18px; margin-right: 5px; border-top-left-radius: 7px;"
        " border-top-right-radius: 7px; }"
        "QTabBar::tab:selected { background: white; color: #004073; }"
        "QTabBar::tab:hover:!selected { background: #f2f2f2; }");
    headerLayout->addWidget(tabBar, 0, Qt::AlignBottom);
    headerLayout->addStretch();
    rootLayout->addWidget(header);

    auto* body = new QWidget(ui->centralwidget);
    auto* bodyLayout = new QHBoxLayout(body);
    bodyLayout->setContentsMargins(0, 0, 0, 0);
    bodyLayout->setSpacing(0);

    auto* sidebar = new QWidget(body);
    sidebar->setObjectName("sidebar");
    sidebar->setFixedWidth(255);
    sidebar->setStyleSheet("#sidebar { background: #f3f3f3; border-right: 1px solid #c8c8c8; }");
    auto* sidebarLayout = new QVBoxLayout(sidebar);
    sidebarLayout->setContentsMargins(20, 22, 18, 18);
    sidebarLayout->setSpacing(12);

    auto* openButton = new QPushButton(style()->standardIcon(QStyle::SP_DialogOpenButton), tr("Open a model..."), sidebar);
    openButton->setIconSize(QSize(20, 20));
    openButton->setMinimumHeight(42);
    openButton->setCursor(Qt::PointingHandCursor);
    openButton->setStyleSheet(
        "QPushButton { text-align: left; padding: 6px 10px; border: 1px solid #c8c8c8;"
        " border-radius: 3px; background: white; color: #004073; }"
        "QPushButton:hover { background: #e6eff6; border-color: #004073; }"
        "QPushButton:pressed { background: #d3e2ef; }");
    sidebarLayout->addWidget(openButton);
    connect(openButton, &QPushButton::clicked, this, [this]() {
        const QString filePath = QFileDialog::getOpenFileName(
            this,
            tr("Open Simulink Model"),
            QString(),
            tr("Simulink Models (*.slx *.mdl);;All Files (*)"));
        if (!filePath.isEmpty())
        {
            ui->statusbar->showMessage(tr("Selected: %1").arg(filePath));
        }
    });

    auto* recentHeading = new QLabel(tr("Recent"), sidebar);
    recentHeading->setStyleSheet("font-size: 12pt; font-weight: 600; margin-top: 10px;");
    sidebarLayout->addWidget(recentHeading);

    auto* recentMessage = new QLabel(tr("Recently opened models will appear here."), sidebar);
    recentMessage->setWordWrap(true);
    recentMessage->setStyleSheet("color: #777777;");
    sidebarLayout->addWidget(recentMessage);

    auto* learnHeading = new QLabel(tr("Learn"), sidebar);
    learnHeading->setStyleSheet("font-size: 12pt; font-weight: 600; margin-top: 12px;");
    sidebarLayout->addWidget(learnHeading);
    auto* quickStart = new QLabel(tr("Simcraft quick start"), sidebar);
    quickStart->setStyleSheet("color: #004073;");
    sidebarLayout->addWidget(quickStart);
    auto* documentation = new QLabel(tr("Documentation"), sidebar);
    documentation->setStyleSheet("color: #004073;");
    sidebarLayout->addWidget(documentation);
    sidebarLayout->addStretch();
    bodyLayout->addWidget(sidebar);

    auto* mainArea = new QWidget(body);
    auto* mainLayout = new QVBoxLayout(mainArea);
    mainLayout->setContentsMargins(24, 18, 24, 16);
    mainLayout->setSpacing(16);

    auto* searchLayout = new QHBoxLayout;
    searchLayout->setSpacing(8);
    auto* searchInput = new QLineEdit(mainArea);
    searchInput->setPlaceholderText(tr("Search templates"));
    auto* categoryFilter = new QComboBox(mainArea);
    categoryFilter->addItems({tr("All"), tr("Models"), tr("Libraries"), tr("Projects")});
    categoryFilter->setMinimumWidth(125);
    auto* searchButton = new QPushButton(tr("Search"), mainArea);
    searchButton->setStyleSheet("background: #004073; color: white; border-color: #004073;");
    searchLayout->addWidget(searchInput, 1);
    searchLayout->addWidget(categoryFilter);
    searchLayout->addWidget(searchButton);
    mainLayout->addLayout(searchLayout);

    auto* pages = new QStackedWidget(mainArea);
    auto* newPage = new QWidget(pages);
    auto* newPageLayout = new QVBoxLayout(newPage);
    newPageLayout->setContentsMargins(0, 0, 0, 0);
    newPageLayout->setSpacing(8);

    auto* sectionHeading = new QToolButton(newPage);
    sectionHeading->setText(tr("Simcraft templates"));
    sectionHeading->setArrowType(Qt::DownArrow);
    sectionHeading->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    sectionHeading->setStyleSheet("QToolButton { border: none; color: #004073; font-size: 12pt; }");
    newPageLayout->addWidget(sectionHeading, 0, Qt::AlignLeft);

    auto* scrollArea = new QScrollArea(newPage);
    scrollArea->setWidgetResizable(true);
    auto* cardContainer = new QWidget(scrollArea);
    auto* cardGrid = new QGridLayout(cardContainer);
    cardGrid->setContentsMargins(0, 4, 0, 4);
    cardGrid->setHorizontalSpacing(16);
    cardGrid->setVerticalSpacing(16);

    const QVector<TemplateInfo> templates = {
        {tr("Blank Model"), tr("Models")},
        {tr("Blank Subsystem"), tr("Models")},
        {tr("Blank Library"), tr("Libraries")},
        {tr("Blank Project"), tr("Projects")},
        {tr("Import Folder"), tr("Projects")},
        {tr("Clone Repository"), tr("Projects")},
        {tr("Browse Examples"), tr("Models")},
        {tr("Custom Template"), tr("Models")},
        {tr("Control System"), tr("Models")},
        {tr("Signal Processing"), tr("Models")},
        {tr("Reusable Components"), tr("Libraries")},
        {tr("Workspace Project"), tr("Projects")}
    };
    QVector<QFrame*> cards;
    for (int i = 0; i < templates.size(); ++i)
    {
        auto* card = createTemplateCard(templates.at(i), i);
        cards.append(card);
        cardGrid->addWidget(card, i / 4, i % 4);
    }
    for (int column = 0; column < 4; ++column)
    {
        cardGrid->setColumnStretch(column, 1);
    }
    scrollArea->setWidget(cardContainer);
    newPageLayout->addWidget(scrollArea, 1);

    auto* showMore = new QPushButton(tr("Show more"), newPage);
    showMore->setStyleSheet("QPushButton { border: none; color: #004073; text-align: left; padding: 0; }");
    newPageLayout->addWidget(showMore, 0, Qt::AlignLeft);
    pages->addWidget(newPage);
    pages->addWidget(createMessagePage(tr("Examples"), tr("Example projects will be available here.")));
    pages->addWidget(createMessagePage(tr("Learn"), tr("Guides and learning resources will be available here.")));
    mainLayout->addWidget(pages, 1);
    bodyLayout->addWidget(mainArea, 1);
    rootLayout->addWidget(body, 1);

    connect(tabBar, &QTabBar::currentChanged, pages, &QStackedWidget::setCurrentIndex);
    showMore->setProperty("expanded", false);
    const auto filterCards = [cards, templates, searchInput, categoryFilter, showMore]() {
        const QString query = searchInput->text().trimmed();
        const QString category = categoryFilter->currentText();
        const bool expanded = showMore->property("expanded").toBool();
        for (int i = 0; i < cards.size(); ++i)
        {
            const bool matchesText = query.isEmpty() || templates.at(i).title.contains(query, Qt::CaseInsensitive);
            const bool matchesCategory = categoryFilter->currentIndex() == 0 || templates.at(i).category == category;
            const bool isInExpandedSection = i < 8 || expanded;
            cards.at(i)->setVisible(matchesText && matchesCategory && isInExpandedSection);
        }
    };
    connect(showMore, &QPushButton::clicked, this, [showMore, filterCards]() {
        const bool expanded = !showMore->property("expanded").toBool();
        showMore->setProperty("expanded", expanded);
        showMore->setText(expanded ? tr("Show less") : tr("Show more"));
        filterCards();
    });
    connect(searchInput, &QLineEdit::textChanged, this, [filterCards](const QString&) { filterCards(); });
    connect(categoryFilter, QOverload<int>::of(&QComboBox::currentIndexChanged), this,
            [filterCards](int) { filterCards(); });
    connect(searchButton, &QPushButton::clicked, this, filterCards);
    filterCards();
}

MainWindow::~MainWindow()
{
    delete ui;
}
