/*
* Program Name: rectangleMaxfieldG.h
* Discussion:   Rectangle Header
*               Header file (*.h)
* Written by:   Maxfield Gordon
* Date:         2016/05/12
*/

#ifndef RECTANGLEMAXFIELDG_H
#define RECTANGLEMAXFIELDG_H
#include <iostream>
#include "FractionMaxfieldG.h"
#include "PointMaxfieldG.h"
using namespace std;

class RectangleMaxfieldG {
public:
	RectangleMaxfieldG();
	RectangleMaxfieldG(const RectangleMaxfieldG&);
	RectangleMaxfieldG(const PointMaxfieldG&);
	RectangleMaxfieldG(const PointMaxfieldG&, const PointMaxfieldG&);	
	~RectangleMaxfieldG();

	void setTop(const PointMaxfieldG&);
	void setBot(const PointMaxfieldG&);

	PointMaxfieldG& getTop(void);
	PointMaxfieldG& getBot(void);

	void moveByX(const PointMaxfieldG&);
	void moveByY(const PointMaxfieldG&);
	void moveBy(const PointMaxfieldG&, const PointMaxfieldG&);
	//void moveBy(int iOld);

	void flipByX(void);
	void flipByY(void);
	void flipThroughOrigin(void);

	void RectangleMaxfieldG::update(PointMaxfieldG, PointMaxfieldG);

	void print(void);

	friend ostream& operator<<(ostream&, const RectangleMaxfieldG&);
	friend istream& operator>>(istream&, const RectangleMaxfieldG&);
protected:
	PointMaxfieldG* top;
	PointMaxfieldG* bot;
};

#endif