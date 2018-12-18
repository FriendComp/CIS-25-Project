/*
* Program Name: fractionMaxfieldG.cpp
* Discussion:   Fraction Definition
*               Implementation file (*.cpp)
* Written by:   Maxfield Gordon
* Date:         2016/05/12
*/

#include <iostream>
#include "fractionMaxfieldG.h"
#include "pointMaxfieldG.h"
#include "utilityMaxfieldG.h"
using namespace std;

FractionMaxfieldG::FractionMaxfieldG() : num(0), denom(1) {
}

FractionMaxfieldG::FractionMaxfieldG(int n): num(n), denom(1) {
}

FractionMaxfieldG::FractionMaxfieldG(int n, int d) {
	int gcd = 1;

	if (d == 0) {
		do {
			cout << "\nEnter a non-zero value for denom: ";
			cin >> d;
		} while (d == 0);
	}

	if (d < 0) {
		n = -n;
		d = -d;
	}

	gcd = gcdBF(n, d);
	num = n / gcd;
	denom = d / gcd;
}

FractionMaxfieldG::FractionMaxfieldG
(const FractionMaxfieldG& that) {
	num = that.num;
	denom = that.denom;
}

FractionMaxfieldG::~FractionMaxfieldG() {
}

void FractionMaxfieldG::updateNum(const FractionMaxfieldG& that) {
	num = that.num;
}

void FractionMaxfieldG::updateDenom(const FractionMaxfieldG& that) {
	denom = that.denom;
}

void FractionMaxfieldG::update(int n, int d) {
	if (d > 0) {
		num = n;
		denom = d;
	}
	else if (d < 0) {
		num = -n;
		denom = -d;
	}
	else {
		cout << "\nError: Denom can not be zero!" << endl;
	}
}

FractionMaxfieldG& FractionMaxfieldG::operator=(const FractionMaxfieldG& f) {
	num = f.num;
	denom = f.denom;

	return *this;
}

FractionMaxfieldG& FractionMaxfieldG::operator+(const FractionMaxfieldG& f) {
	int n;
	int d;

	n = num * f.denom + denom * f.num;
	d = denom * f.denom;

	return *this;
}

FractionMaxfieldG& FractionMaxfieldG::operator-(const FractionMaxfieldG& f) {
	int n;
	int d;

	n = num * f.denom - denom * f.num;
	d = denom * f.denom;

	return *this;
}

FractionMaxfieldG& FractionMaxfieldG::operator*(const FractionMaxfieldG& f) {
	int n;
	int d;

	n = num * f.num;
	d = denom * f.denom;

	return *this;
}

FractionMaxfieldG& FractionMaxfieldG::operator/(const FractionMaxfieldG& f) {
	int n;
	int d;

	if (f.num != 0) {
		n = num * f.denom;
		d = denom * f.num;
	}
	else {
		printf("\nCan not divide with a num of 0! resultPtr will be invalid!");
		n = -99999;
		d = 1;
	}

	return *this;
}

FractionMaxfieldG FractionMaxfieldG::operator+=(const FractionMaxfieldG& f) {
	int n;
	int d;
	int factor;

	n = num * f.denom + denom * f.num;
	d = denom * f.denom;

	factor = gcdBF(n, d);
	num = n / factor;
	denom = d / factor;

	return *this;
}

FractionMaxfieldG FractionMaxfieldG::operator-=(const FractionMaxfieldG& f) {
	int n;
	int d;
	int factor;

	n = num * f.denom - denom * f.num;
	d = denom * f.denom;

	factor = gcdBF(n, d);
	num = n / factor;
	denom = d / factor;

	return *this;
}

FractionMaxfieldG FractionMaxfieldG::operator*=(const FractionMaxfieldG& f) {
	int n;
	int d;
	int factor;

	n = num * f.num;
	d = denom * f.denom;

	factor = gcdBF(n, d);
	num = n / factor;
	denom = d / factor;

	return *this;
}

FractionMaxfieldG FractionMaxfieldG::operator/=(const FractionMaxfieldG& f) {
	int n;
	int d;
	int factor;

	n = num * f.denom;
	d = denom * f.num;

	factor = gcdBF(n, d);
	num = n / factor;
	denom = d / factor;

	return *this;
}

void FractionMaxfieldG::flipSign() {
	num = -num;
}

void FractionMaxfieldG::setNum(int n) {
	num = n;
}

int FractionMaxfieldG::getNum() const {
	return num;
}

void FractionMaxfieldG::setDenom(int d) {
	if (d < 0) {
		num = -num;
		denom = -d;
	} else {
		denom = d;
	}
}

int FractionMaxfieldG::getDenom() const {
	return denom;
}

void FractionMaxfieldG::print(FractionMaxfieldG* fr) {
	cout << "\nnum: "
		<< fr->getNum()
		<< "\ndenom: "
		<< fr->getDenom()
		<< endl;
}

ostream& operator<<(ostream& out, const FractionMaxfieldG& f) {
	out << "\n    " << f.getNum() << " / " << f.getDenom() << endl;
	return out;
}

istream& operator>>(istream& in, FractionMaxfieldG& arg) {
	int n;
	int d;
	
	cout << "\nEnter num: ";
	in >> n;
	cout << "\nEnter denom: ";
	in >> d;

	arg = FractionMaxfieldG(n, d);

	return in;
}