/*
* Program Name: fractionMaxfieldG.h
* Discussion:   Fraction Header
*               Header file (*.h)
* Written by:   Maxfield Gordon
* Date:         2016/05/12
*/

#ifndef FRACTIONMAXFIELDG_H
#define FRACTIONMAXFIELDG_H
#include <iostream>
using namespace std;

class FractionMaxfieldG {
public:
	FractionMaxfieldG();
	FractionMaxfieldG(int);
	FractionMaxfieldG(int n, int d);

	FractionMaxfieldG(const FractionMaxfieldG& that);

	FractionMaxfieldG(FractionMaxfieldG* thatAddr);

	FractionMaxfieldG& operator=(const FractionMaxfieldG& f);
	FractionMaxfieldG& operator+(const FractionMaxfieldG& f);
	FractionMaxfieldG& operator-(const FractionMaxfieldG& f);
	FractionMaxfieldG& operator*(const FractionMaxfieldG& f);
	FractionMaxfieldG& operator/(const FractionMaxfieldG& f);
	FractionMaxfieldG operator+=(const FractionMaxfieldG& f);
	FractionMaxfieldG operator-=(const FractionMaxfieldG& f);
	FractionMaxfieldG operator*=(const FractionMaxfieldG& f);
	FractionMaxfieldG operator/=(const FractionMaxfieldG& f);

	friend ostream& operator<<(ostream& out, const FractionMaxfieldG&);
	friend istream& operator>>(istream&, FractionMaxfieldG&);

	void flipSign();
	
	~FractionMaxfieldG();

	void setNum(int n);
	int getNum() const;

	void setDenom(int d);
	int getDenom() const;

	void updateNum(const FractionMaxfieldG& fr);
	void updateDenom(const FractionMaxfieldG& fr);
	void update(int, int);

	void print(FractionMaxfieldG* fr);

private:
	int num;
	int denom;
};

#endif