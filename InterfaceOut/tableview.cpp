#include "tableview.h"
#include "iostream"

TableView::TableView()
{

    for(int i=0; i<width; i++){
        for(int j=0;j<height;j++){
            setCell(i,j, new TableColor(255,255,255));
        }
    }
}


//TableView::~TableView()
//{
//    for(int i=0;i<getHeight();i++){
//        for(int j=0; j<getWidth();j++){
//            delete getCell(i,j);
//        }
//    }
//}

void TableView::setCell(int i, int j, TableColor * color)
{
    delete this->table[i][j];
    this->table[i][j]=color;
}

TableColor *TableView::getCell(int i, int j)
{
    return this->table[i][j];
}

void TableView::cleanAll()
{
    for(int i=0; i<width; i++){
        for(int j=0;j<height;j++){
            setCell(i,j, new TableColor(255,255,255));
        }
    }
}
int TableView::getHeight() const
{
    return height;
}
int TableView::getWidth() const
{
    return width;
}




