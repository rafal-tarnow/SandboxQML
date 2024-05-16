#include "GreenWidget.hpp"
#include <QPalette>
#include <QResizeEvent>

GreenWidget::GreenWidget(QWidget *parent)
    : QQuickWidget(parent), redQuickWidget(new QQuickWidget(this))
{
    // Tworzenie czerwonego wewnętrznego widgetu
    redQuickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
    redQuickWidget->setSource(QUrl("qrc:///MainRed.qml"));
}

GreenWidget::~GreenWidget()
{

}

void GreenWidget::onYellowRectangleChanged(int x, int y, int width, int height)
{
    qDebug() << __FUNCTION__ << x << y << width << height;
    redQuickWidget->move(x+1,y+1);
    redQuickWidget->setFixedSize(width-2, height-2);
}

void GreenWidget::resizeEvent(QResizeEvent *event)
{
    // Wywołanie metody klasy bazowej
    QQuickWidget::resizeEvent(event);
}
