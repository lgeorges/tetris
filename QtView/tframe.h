#ifndef TFRAME_H
#define TFRAME_H

#include <QWidget>
#include "InterfaceOut/tableview.h"
#include "QtView/tgrid.h"
#include "QtCommand/tcommandpanel.h"
#include "Core/game.h"

class TFrame : public QWidget
{
public:
    TFrame(TableView* table,Game* game, QWidget *parent = 0);
    void updateFrame();

private:
    TGrid* grille;
    TCommandPanel* command_panel;

signals:

public slots:
    void testUpdate(Game* game);
};

#endif // TFRAME_H
