/*
* Program Name: rectangleMaxfieldG.cpp
* Discussion:   Rectangle Definition
*               Implementation file (*.cpp)
* Written by:   Maxfield Gordon
* Date:         2016/05/12
*/

#include <iostream>
#include "fractionMaxfieldG.h"
#include "pointMaxfieldG.h"
#include "rectangleMaxfieldG.h"
using namespace std;

RectangleMaxfieldG::RectangleMaxfieldG() {
	top = new PointMaxfieldG();
	bot = new PointMaxfieldG();
}

RectangleMaxfieldG::RectangleMaxfieldG(const RectangleMaxfieldG& Rectangle) {
	top = Rectangle.top;
	bot = Rectangle.bot;
}

RectangleMaxfieldG::RectangleMaxfieldG(const PointMaxfieldG& p) {
	*top = p;
	*bot = p;
}

RectangleMaxfieldG::RectangleMaxfieldG(const PointMaxfieldG& p1, const PointMaxfieldG& p2) {
	*top = p1;
	*bot = p2;
}

RectangleMaxfieldG::~RectangleMaxfieldG() {
}

void RectangleMaxfieldG::setTop(const PointMaxfieldG& p) {
	*top = p;
}

void RectangleMaxfieldG::setBot(const PointMaxfieldG& p) {
	*bot = p;
}


ostream& operator<<(ostream& out, const RectangleMaxfieldG& r) {
	out << "\n    " << p.x << " / " << p.y << endl;
	return out;
}

istream& operator>>(istream& in, const RectangleMaxfieldG& r) {
	cout << "\nEnter top: ";
	in >> r.top;
	cout << "\nEnter bot: ";
	in >> r.bot;
	return in;
}