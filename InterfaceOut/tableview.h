#ifndef TABLEVIEW_H
#define TABLEVIEW_H

#include "InterfaceOut/tablecolor.h"
#include "constantes.h"

class TableView
{
public:
    TableView();
    ~TableView();
    void setCell(int i, int j, TableColor*);
    TableColor* getCell(int i, int j);
    void cleanAll();

    int getHeight() const;

    int getWidth() const;

private:
    TableColor *table [W_TABLE][H_TABLE];
  static const int height = H_TABLE;
  static const int width = W_TABLE;
};

#endif // TABLEVIEW_H
