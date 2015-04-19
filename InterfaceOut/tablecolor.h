#ifndef TABLECOLOR_H
#define TABLECOLOR_H

class TableColor
{
public:
    TableColor(int red, int green, int blue);
    TableColor(TableColor* color);

    ~TableColor();
    void setColor(int red, int green, int blue);
    int getRed();
    int getGreen();
    int getBlue();
    void setRed(int red);
    void setBlue(int blue);
    void setGreen(int green);

private:
    int r;
    int g;
    int b;
};

#endif // TABLECOLOR_H
