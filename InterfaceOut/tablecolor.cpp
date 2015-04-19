#include "tablecolor.h"
#include "iostream"

TableColor::TableColor(int red, int green, int blue)
{
    this->setColor(red,green,blue);
}

TableColor::TableColor(TableColor* color)
{
    this->setColor(color->getRed(),color->getGreen(),color->getBlue());
}

TableColor::~TableColor()
{

}

void TableColor::setColor(int red, int green, int blue){
    this->setRed(red);
    this->setGreen(green);
    this->setBlue(blue);
}

void TableColor::setRed(int red){
    if(red<0)
        this->r=0;
    if(red>255)
        this->r=255;
    else
        this->r=red;
}

void TableColor::setGreen(int green){
    if(green<0)
        this->g=0;
    if(green>255)
        this->g=255;
    else
        this->g=green;
}

void TableColor::setBlue(int blue){
    if(blue<0)
        this->b=0;
    if(blue>255)
        this->b=255;
    else
        this->b=blue;
}

int TableColor::getRed(){
    return this->r;
}

int TableColor::getGreen(){
    return this->g;
}

int TableColor::getBlue(){
    return this->b;
}

