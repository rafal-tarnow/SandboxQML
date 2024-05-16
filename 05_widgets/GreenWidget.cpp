#include "GreenWidget.hpp"
#include <QPalette>
#include <QResizeEvent>

GreenWidget::GreenWidget(QWidget *parent)
    : QQuickWidget(parent), innerWidget(new QWidget(this))
{
    // Tworzenie czerwonego wewnętrznego widgetu
    QPalette innerPalette = innerWidget->palette();
    innerPalette.setColor(QPalette::Window, Qt::red);
    innerWidget->setPalette(innerPalette);
    innerWidget->setAutoFillBackground(true);
}

GreenWidget::~GreenWidget()
{

}

void GreenWidget::resizeEvent(QResizeEvent *event)
{
    // Ustawienie rozmiaru i pozycji czerwonego widgetu
    int newWidth = width() / 2;
    int newHeight = height() / 2;
    innerWidget->setFixedSize(newWidth, newHeight);
    innerWidget->move((width() - newWidth) / 2, (height() - newHeight) / 2);

    // Wywołanie metody klasy bazowej
    QQuickWidget::resizeEvent(event);
}
