#include <QGuiApplication>
#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQuickTextDocument>
#include <QTextOption>
#include <QtWebView/QtWebView>
#include <QtWebEngineQuick>
#include <QQuickStyle>
#include <QQmlContext>
#include <QQuickWidget>
#include "GreenWidget.hpp"

int main(int argc, char *argv[])
{
    QtWebView::initialize();
    QtWebEngineQuick::initialize();
    QApplication app(argc, argv);


    GreenWidget *greenWidget = new GreenWidget();
    greenWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
    greenWidget->engine()->rootContext()->setContextProperty("greenWidget", greenWidget);
    greenWidget->setSource(QUrl("qrc:///MainGreen.qml"));
    greenWidget->show();


    return app.exec();
}
