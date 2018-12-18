/*
* Program Name: circleMaxfieldG.h
* Discussion:   Circle Header
*               Header file (*.h)
* Written by:   Maxfield Gordon
* Date:         2016/05/12
*/

#ifndef CIRCLEMAXFIELDG_H
#define CIRCLEMAXFIELDG_H
#include <iostream>
#include "FractionMaxfieldG.h"
#include "PointMaxfieldG.h"
using namespace std;

class CircleMaxfieldG {
public:
	CircleMaxfieldG();
	CircleMaxfieldG(const CircleMaxfieldG&);
	CircleMaxfieldG(const PointMaxfieldG&, const FractionMaxfieldG&);
	~CircleMaxfieldG();

	//CircleMaxfieldG& CircleMaxfieldG::operator+(const CircleMaxfieldG& p);

	void compareVolume(const CircleMaxfieldG&);
	void compareArea(const CircleMaxfieldG&);

	void CircleMaxfieldG::update(PointMaxfieldG&, FractionMaxfieldG);

	void print(void);

	friend ostream& operator<<(ostream&, const CircleMaxfieldG&);
	friend istream& operator>>(istream&, const CircleMaxfieldG&);
private:
	PointMaxfieldG* center;
	FractionMaxfieldG radius;
};

#endif