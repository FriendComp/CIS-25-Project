/*
* Program Name: circleMaxfieldG.cpp
* Discussion:   Circle Definition
*               Implementation file (*.cpp)
* Written by:   Maxfield Gordon
* Date:         2016/05/12
*/

#include <iostream>
#include "fractionMaxfieldG.h"
#include "pointMaxfieldG.h"
#include "circleMaxfieldG.h"
using namespace std;

CircleMaxfieldG::CircleMaxfieldG() {
	center = new PointMaxfieldG();
	radius = new FractionMaxfieldG();
}

CircleMaxfieldG::CircleMaxfieldG(const CircleMaxfieldG& Circle) {
	center = Circle.center;
	radius = Circle.radius;
}

CircleMaxfieldG::CircleMaxfieldG(const PointMaxfieldG& cent, const FractionMaxfieldG& rad) {
	*center = cent;
	radius = rad;
}

CircleMaxfieldG::~CircleMaxfieldG() {
}

void CircleMaxfieldG::compareVolume(const CircleMaxfieldG& other) {
	cout << "\nThe volume of a circle is always zero." << endl;
}
void CircleMaxfieldG::compareArea(const CircleMaxfieldG& b) {
	FractionMaxfieldG pi = new FractionMaxfieldG(157, 50);

	if ((pi * radius * radius) > (pi * b.radius * b.radius))
		cout << "\nCircleA is larger than CircleB." << endl;
	else
		cout << "\nCircleA is smaller than CircleB." << endl;

}

void CircleMaxfieldG::print() { 
	cout << "\n    " << x.getNum() << " / " << x.getDenom()
		<< "\n    " << y.getNum() << " / " << y.getDenom() << endl;
}

void CircleMaxfieldG::update(PointMaxfieldG cen, FractionMaxfieldG rad) {
	x = newx;
	y = newy;
}

ostream& operator<<(ostream& out, const CircleMaxfieldG& p) {
	out << "\n    " << p.x << " / " << p.y << endl;
	return out;
}

istream& operator>>(istream& in, const CircleMaxfieldG& p) {
	cout << "\nEnter x: ";
	in >> p.x;
	cout << "\nEnter y: ";
	in >> p.y;
	return in;
}