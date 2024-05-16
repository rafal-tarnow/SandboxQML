#ifndef WIDGET_H
#define WIDGET_H

#include <QQuickWidget>

class GreenWidget : public QQuickWidget
{
    Q_OBJECT

public:
    GreenWidget(QWidget *parent = nullptr);
    ~GreenWidget();

protected:
    void resizeEvent(QResizeEvent *event) override;

private:
    QWidget *innerWidget;
};
#endif // WIDGET_H
