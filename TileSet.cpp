// HEADERS //
#include "TileSet.h"
#include <string>

using namespace std;

// CLASS DEFINITIONS //
TileSet::TileSet()
{
	top = "XX"; 
	right = "XX";
	bottom = "XX";
	left = "XX";
	midTop = false;
	midRight = false;
	midBottom = false;
	midLeft = false;
	doubleMid = false;
}

TileSet::TileSet(string t, string r, string b, string l, bool mt, bool mr, bool mb, bool ml, bool dm)
{
	top = t;
	right = r;
	bottom = b;
	left = l;

	midTop = mt;
	midRight = mr;
	midBottom = mb;
	midLeft = ml;

	doubleMid = dm;
}

TileSet::TileSet(TileSet& a)
{
	top = a.getTop();
	right = a.getRight();
	bottom = a.getBottom();
	left = a.getLeft();

	midTop = a.getMidTop();
	midRight = a.getMidRight();
	midBottom = a.getMidBottom();
	midLeft = a.getMidLeft();

	doubleMid = a.getDoubleMid();
}

string TileSet::getTop()
{
	return top;
}
string TileSet::getRight()
{
	return right;
}
string TileSet::getBottom()
{
	return bottom;
}
string TileSet::getLeft()
{
	return left;
}

bool TileSet::getMidTop()
{
	return midTop;
}
bool TileSet::getMidRight()
{
	return midRight;
}
bool TileSet::getMidBottom()
{
	return midBottom;
}
bool TileSet::getMidLeft()
{
	return midLeft;
}

bool TileSet::getDoubleMid()
{
	return doubleMid;
}

void TileSet::setTop(string s)
{
	top = s;
}
void TileSet::setRight(string s)
{
	right = s;
}
void TileSet::setBottom(string s)
{
	bottom = s;
}
void TileSet::setLeft(string s)
{
	left = s;
}

void TileSet::setMidTop(bool b)
{
	midTop = b;
}
void TileSet::setMidRight(bool b)
{
	midRight = b;
}
void TileSet::setMidBottom(bool b)
{
	midBottom = b;
}
void TileSet::setMidLeft(bool b)
{
	midLeft = b;
}