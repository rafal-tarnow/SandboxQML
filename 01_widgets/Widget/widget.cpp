#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // Ustawienie koloru tła na zielony
    QPalette palette = this->palette();
    palette.setColor(QPalette::Window, Qt::green);
    this->setPalette(palette);
    this->setAutoFillBackground(true);
}

Widget::~Widget()
{
}
