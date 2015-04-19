#ifndef TFRAME_H
#define TFRAME_H

#include <QWidget>
#include "tableview.h"
#include "tgrid.h"
#include "game.h"

class TFrame : public QWidget
{
public:
    TFrame(TableView* table, QWidget *parent = 0);
    void updateFrame();

private:
    TGrid* grille;

signals:

public slots:
    void testUpdate(Game* game);
};

#endif // TFRAME_H
