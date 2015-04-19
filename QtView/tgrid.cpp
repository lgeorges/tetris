#include "tgrid.h"

TGrid::TGrid(TableView* table,QWidget *parent) :
    QWidget(parent)
{
   this->table=table;
   setFixedSize(15*W_TABLE, 15*H_TABLE);
   gridLayout = new QGridLayout;

    for(int i=0;i<H_TABLE;i++){
        for(int j=0;j<W_TABLE;j++){
            cases[i][j]= new TCell(table->getCell(i,j));
            gridLayout->addWidget(cases[i][j], i, j);
        }
    }
    gridLayout->setSpacing(1);
    setLayout(gridLayout);
}

void TGrid::updateGrid(){
    int h=table->getHeight();
    int w=table->getWidth();

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cases[i][j]->updateColor(table->getCell(j,h-1-i));
        }
    }
}
