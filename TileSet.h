#pragma once

#ifndef TILESET_H
#define TILESET_H

#include <string>

using namespace std;

class TileSet
{
private:
    string top, right, bottom, left;
    bool midTop, midRight, midBottom, midLeft, doubleMid;

public:
    TileSet(); //default constructor
    TileSet(string,string,string,string, bool,bool,bool,bool, bool); // clockwise order from top to left
    TileSet(TileSet &a); // copy constructor

    string getTop();
    string getRight();
    string getBottom();
    string getLeft();

    bool getMidTop();
    bool getMidRight();
    bool getMidBottom();
    bool getMidLeft();
    bool getDoubleMid();

    void setTop(string);
    void setRight(string);
    void setBottom(string);
    void setLeft(string);

    void setMidTop(bool);
    void setMidRight(bool);
    void setMidBottom(bool);
    void setMidLeft(bool);
};

#endif 



