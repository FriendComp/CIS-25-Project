/*
* Program Name: pointMaxfieldG.cpp
* Discussion:   Point Definition
*               Implementation file (*.cpp)
* Written by:   Maxfield Gordon
* Date:         2016/05/12
*/

#include <iostream>
#include "fractionMaxfieldG.h"
#include "pointMaxfieldG.h"
#include "utilityMaxfieldG.h"
using namespace std;

PointMaxfieldG::PointMaxfieldG() : x(FractionMaxfieldG()), y(FractionMaxfieldG()) {
}

PointMaxfieldG::PointMaxfieldG(const PointMaxfieldG& point) {
	x = point.x;
	y = point.y;
}

PointMaxfieldG::PointMaxfieldG(const FractionMaxfieldG& xy) {
	x = xy;
	y = xy;
}

PointMaxfieldG::PointMaxfieldG(const FractionMaxfieldG& frx, const FractionMaxfieldG& fry) {
	x = frx;
	y = fry;
}

PointMaxfieldG::~PointMaxfieldG() {
}

void PointMaxfieldG::moveByX(const FractionMaxfieldG& f) {
	x += f;
}

void PointMaxfieldG::moveByY(const FractionMaxfieldG& f) {
	y += f;
}

void PointMaxfieldG::moveBy(const FractionMaxfieldG& delX, const FractionMaxfieldG& delY) {
	x += delX;
	y += delY;
}

//void PointMaxfieldG::moveBy(int iOld) {
//}

void PointMaxfieldG::flipByX() {
	x.flipSign();
}

void PointMaxfieldG::flipByY() {
	y.flipSign();
}

void PointMaxfieldG::flipThroughOrigin() {
	x.flipSign();
	y.flipSign();
}

void PointMaxfieldG::print() { 
	cout << "\n    " << x.getNum() << " / " << x.getDenom()
		<< "\n    " << y.getNum() << " / " << y.getDenom() << endl;
}

void PointMaxfieldG::update(FractionMaxfieldG newx, FractionMaxfieldG newy) {
	x = newx;
	y = newy;
}

ostream& operator<<(ostream& out, const PointMaxfieldG& p) {
	out << "\n    " << p.x << " / " << p.y << endl;
	return out;
}

istream& operator>>(istream& in, const PointMaxfieldG& p) {
	cout << "\nEnter x: ";
	in >> p.x;
	cout << "\nEnter y: ";
	in >> p.y;
	return in;
}