/*
* Program Name: utilityMaxfieldG.h
* Discussion:   Utility Header
*               Header file (*.h)
* Written by:   Maxfield Gordon
* Date:         2016/05/12
*/

#ifndef UTILITYMAXFIELDG_H
#define UTILITYMAXFIELDG_H
#include <iostream>
#include "fractionMaxfieldG.h"
#include "pointMaxfieldG.h"
#include "circleMaxfieldG.h"
#include "rectangleMaxfieldG.h"
using namespace std;

void displayClass(void);

void menuMaxfieldG(void);

void initMenu(PointMaxfieldG**);
void rectangleMenu(PointMaxfieldG*);
void circleMenu(PointMaxfieldG*);
void mixedMenu(PointMaxfieldG*);

int gcdBF(int arg1, int arg2);

double sqrtInt(int);

#endif