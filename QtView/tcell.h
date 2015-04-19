#ifndef TCELL_H
#define TCELL_H

#include <QWidget>
#include "tablecolor.h"


class TCell : public QWidget
{
    Q_OBJECT
public:
    TCell(TableColor* color, QWidget *parent = 0);
    TableColor* getColor();
    void updateColor(TableColor* table);

private:
    TableColor *color;

protected:
    void paintEvent(QPaintEvent *event);

signals:

public slots:

};

#endif // TCELL_H
