/*
* Program Name: pointMaxfieldG.h
* Discussion:   Point Header
*               Header file (*.h)
* Written by:   Maxfield Gordon
* Date:         2016/05/12
*/

#ifndef POINTMAXFIELDG_H
#define POINTMAXFIELDG_H
#include <iostream>
#include "fractionMaxfieldG.h"
using namespace std;

class PointMaxfieldG {
public:
	PointMaxfieldG();
	PointMaxfieldG(const PointMaxfieldG&);
	PointMaxfieldG(const FractionMaxfieldG&);
	PointMaxfieldG(const FractionMaxfieldG&, const FractionMaxfieldG&);	
	~PointMaxfieldG();

	//PointMaxfieldG& PointMaxfieldG::operator+(const PointMaxfieldG& p);

	void moveByX(const FractionMaxfieldG&);
	void moveByY(const FractionMaxfieldG&);
	void moveBy(const FractionMaxfieldG&, const FractionMaxfieldG&);
	//void moveBy(int iOld);

	void flipByX(void);
	void flipByY(void);
	void flipThroughOrigin(void);

	void PointMaxfieldG::update(FractionMaxfieldG, FractionMaxfieldG);

	void print(void);

	friend ostream& operator<<(ostream&, const PointMaxfieldG&);
	friend istream& operator>>(istream&, const PointMaxfieldG&);
protected:
	FractionMaxfieldG x;
	FractionMaxfieldG y;
};

#endif