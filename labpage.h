#ifndef LABPAGE_H
#define LABPAGE_H

#include <machine.h>
#include <QWidget>
#include <QPainter>

namespace Ui {
class labpage;
}

class labpage : public QWidget
{
    Q_OBJECT

public:
    explicit labpage(QWidget *parent = nullptr);
    ~labpage();
    void paintEvent(QPaintEvent* painter);

//    void mousePressEvent(QMouseEvent* event);
//    void mouseMoveEvent(QMouseEvent* event);
    void creatMachine();

private:
    Ui::labpage *ui;
    Machine* selectedObject;


};

#endif // LABPAGE_H
