#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // Ustawienie koloru tła na zielony
    QPalette palette = this->palette();
    palette.setColor(QPalette::Window, Qt::green);
    this->setPalette(palette);
    this->setAutoFillBackground(true);


    // Tworzenie czerwonego wewnętrznego widgetu
    QWidget *innerWidget = new QWidget(this);
    innerWidget->setFixedSize(200, 150); // Ustawienie rozmiaru wewnętrznego widgetu
    innerWidget->move(50, 50); // Ustawienie pozycji wewnętrznego widgetu

    // Ustawienie koloru tła na czerwony dla wewnętrznego widgetu
    QPalette innerPalette = innerWidget->palette();
    innerPalette.setColor(QPalette::Window, Qt::red);
    innerWidget->setPalette(innerPalette);
    innerWidget->setAutoFillBackground(true);
}

Widget::~Widget()
{
}
