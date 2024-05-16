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


    GreenWidget *view = new GreenWidget();
    view->setResizeMode(QQuickWidget::SizeRootObjectToView);
    view->setSource(QUrl("qrc:///MainGreen.qml"));
    view->show();


    return app.exec();
}
