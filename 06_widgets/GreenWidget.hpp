#ifndef WIDGET_H
#define WIDGET_H

#include <QQuickWidget>

class GreenWidget : public QQuickWidget
{
    Q_OBJECT

public:
    GreenWidget(QWidget *parent = nullptr);
    ~GreenWidget();

    Q_INVOKABLE void onYellowRectangleChanged(int x, int y, int width, int height);

protected:
    void resizeEvent(QResizeEvent *event) override;

private:
    QQuickWidget *redQuickWidget;
};
#endif // WIDGET_H
