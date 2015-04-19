#ifndef TGRID_H
#define TGRID_H

#include <QGridLayout>
#include <QWidget>

#include "QtView/tcell.h"
#include "constantes.h"
#include "InterfaceOut/tableview.h"


class TGrid : public QWidget
{
    Q_OBJECT
public:
    TGrid(TableView* table, QWidget *parent = 0);
    void updateGrid();

signals:

public slots:

private:
    TableView* table;
    TCell *cases [H_TABLE][W_TABLE];
    QGridLayout *gridLayout;

};

#endif // TGRID_H
