#include "tcell.h"
#include <QDebug>

TCell::TCell(TableColor* color, QWidget *parent) :
    QWidget(parent)
{
    setMinimumSize(10, 10);
    this->updateColor(color);
//    setPalette(QPalette(QColor(color->getRed(), color->getGreen(), color->getBlue())));
//    setAutoFillBackground(true);
}

void TCell::paintEvent(QPaintEvent * /* event */)
{
    setPalette(QPalette(QColor(color->getRed(), color->getGreen(), color->getBlue())));
    setAutoFillBackground(true);
//    QPainter painter(this);
//    painter.drawText(200, 200,
//    tr("Angle = ") + QString::number(currentAngle));
}

TableColor* TCell::getColor(){
    return this->color;
}

void TCell::updateColor(TableColor* color){
    this->color=color;
    update();
}
