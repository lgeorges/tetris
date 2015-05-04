#include "tframe.h"

#include <QWidget>
#include <QGridLayout>


TFrame::TFrame(TableView* table,Game* game, QWidget *parent)
    : QWidget(parent)
{
    QGridLayout *gridLayout = new QGridLayout();
    grille = new TGrid(table);
    command_panel = new TCommandPanel(game);

    gridLayout->addWidget(grille, 1, 0);
    gridLayout->addWidget(command_panel, 1, 1);
//    gridLayout->addWidget(angle, 1, 0);
//    gridLayout->addWidget(cannonField, 1, 1, 2, 1);
//    gridLayout->setColumnStretch(0, 0.5);
//    gridLayout->setSpacing(1);
    setLayout(gridLayout);
//    angle->setValue(60);
//    angle->setFocus();

}

void TFrame::updateFrame()
{
    grille->updateGrid();
}

