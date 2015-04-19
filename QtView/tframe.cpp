#include "tframe.h"

#include <QWidget>
#include <QGridLayout>

TFrame::TFrame(TableView* table, QWidget *parent)
    : QWidget(parent)
{
    QGridLayout *gridLayout = new QGridLayout();
    grille = new TGrid(table);
    gridLayout->addWidget(grille, 1, 0);
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

