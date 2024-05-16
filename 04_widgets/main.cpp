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

int main(int argc, char *argv[])
{
    QtWebView::initialize();
    QtWebEngineQuick::initialize();
    QApplication app(argc, argv);


    QQuickWidget *view = new QQuickWidget();
    view->setResizeMode(QQuickWidget::SizeRootObjectToView);
    view->setSource(QUrl("qrc:///Main.qml"));
    view->show();

    return app.exec();
}
