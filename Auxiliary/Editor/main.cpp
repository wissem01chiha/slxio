#include "mainwindow.h"

#include <QApplication>
#include <QDebug>
#include <QFile>
#include <QFont>
#include <QFontDatabase>
#include <QLocale>
#include <QTranslator>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("Simcraft");

    QFile styleSheetFile(":/styles/simcraft.qss");
    if (!styleSheetFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qWarning() << "Unable to load the Simcraft stylesheet:" << styleSheetFile.errorString();
    }
    else
    {
        a.setStyleSheet(QString::fromUtf8(styleSheetFile.readAll()));
    }

    const int fontId = QFontDatabase::addApplicationFont(":/fonts/SimcraftDisplay.ttf");
    if (fontId < 0)
    {
        qWarning() << "Unable to load the Simcraft application font.";
    }
    else
    {
        const QStringList fontFamilies = QFontDatabase::applicationFontFamilies(fontId);
        if (fontFamilies.isEmpty())
        {
            qWarning() << "The Simcraft application font did not provide any font families.";
        }
        else
        {
            a.setFont(QFont(fontFamilies.first()));
        }
    }

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString& locale : uiLanguages)
    {
        const QString baseName = "Editor_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName))
        {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    w.show();
    return QApplication::exec();
}
