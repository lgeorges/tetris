#include "InterfaceOut/tableview.h"
#include "InterfaceOut/tablecolor.h"

void testFullFillTableView(TableView* table){
    int h = table->getHeight();
    int w = table->getWidth();
//    qDebug()<<"h: "<<h<<"  w: "<<w;
//    TableColor *color = new TableColor(0,0,0);
//    table->setCell(12,, new TableColor(0,0,0));
    for(int i=0; i<h; i++){
            table->setCell(i,0, new TableColor(0,255,0));
    }
    for(int j=0; j<w; j++){
        table->setCell(h-1,j, new TableColor(255,0,0));
    }
}


