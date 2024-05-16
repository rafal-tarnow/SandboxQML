#include "widget.h"
#include <QPalette>
#include <QResizeEvent>

Widget::Widget(QWidget *parent)
    : QWidget(parent), innerWidget(new QWidget(this))
{
    // Ustawienie koloru tła na zielony
    QPalette palette = this->palette();
    palette.setColor(QPalette::Window, Qt::green);
    this->setPalette(palette);
    this->setAutoFillBackground(true);

    // Tworzenie czerwonego wewnętrznego widgetu
    QPalette innerPalette = innerWidget->palette();
    innerPalette.setColor(QPalette::Window, Qt::red);
    innerWidget->setPalette(innerPalette);
    innerWidget->setAutoFillBackground(true);
}

Widget::~Widget()
{
}

void Widget::resizeEvent(QResizeEvent *event)
{
    // Ustawienie rozmiaru i pozycji czerwonego widgetu
    int newWidth = width() / 2;
    int newHeight = height() / 2;
    innerWidget->setFixedSize(newWidth, newHeight);
    innerWidget->move((width() - newWidth) / 2, (height() - newHeight) / 2);

    // Wywołanie metody klasy bazowej
    QWidget::resizeEvent(event);
}
