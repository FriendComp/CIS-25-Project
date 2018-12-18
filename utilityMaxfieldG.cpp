/*
* Program Name: pointUtilityMaxfieldG.cpp
* Discussion:   Point Utility
*               Implementation file (*.cpp)
* Written by:   Maxfield Gordon
* Date:         2016/05/12
*/

#include <iostream>
#include "fractionMaxfieldG.h"
#include "pointMaxfieldG.h"
#include "circleMaxfieldG.h"
#include "rectangleMaxfieldG.h"
#include "utilityMaxfieldG.h"
using namespace std;

void displayClass() {
	cout << "CIS 25 - C++ Programming"
		"\nLaney College"
		"\nMaxfield Gordon\n"
		"\nAssignment Information --"
		"\n  Assignment Number: Lab 05,"
		"\n                     Coding Assignment -- Exercise #1"
		"\n  Written by:	     Maxfield Gordon"
		"\n  Submitted Date:    2016/04/28\n";
}

void menuMaxfieldG(void) {
	int option;
	PointMaxfieldG* ptr = nullptr;

	do {
		cout << "\n*********************"
			<< "\n*     MAIN MENU    *"
			<< "\n*  1. Rectangle Tasks  *"
			<< "\n*  2. Circle Tasks        *"
			<< "\n*  3. Mixed Tasks      *"
			<< "\n*  4. Quit          *"
			<< "\n*********************" 
		    << "\nSelect an option (1 - 4): ";

		cin >> option;

		switch (option) {
		case 1:
			rectangleMenu(ptr);
			break;
		case 2:
			circleMenu(ptr);
			break;
		case 3:
			mixedMenu(ptr);
			break;
		case 4:
			cout << "\nQuitting!" << endl;
			break;
		default:
			cout << "\nWrong option!" << endl;
		}
	} while (option != 4);

	if (ptr != nullptr)
		delete[] ptr;
}

void initMenu(PointMaxfieldG** ptrPtr) {
	int option;
	PointMaxfieldG top;
	PointMaxfieldG bot;

	do {
		cout << "\n*********************"
			"\n* MENU InitPoint     *"
			"\n*  1. Initialize     *"
			"\n*  2. Update         *"
			"\n*  3. Return         *"
			"\n*********************"
			<< endl;

		if (*ptrPtr == nullptr) {
			cout << "\n  There are no Points available -- "
				"Recommend select Option 1 to create.";
		}
		else {
			cout << "\n  There are is a Points -- "
				"Recommend select Option 2 to update." << endl;
		}

		cout << "\nEnter the option (1 to 3): ";
		cin >> option;

		switch (option) {
		case 1:
			if (*ptrPtr == nullptr) {
				cout << "\nCreating Point -- ";
				cin >> ptrX;
				cin >> ptrY;
				*ptrPtr = new PointMaxfieldG(ptrX, ptrY);
			}
			break;
		case 2:
			cin >> ptrX;
			cin >> ptrY;
			(*ptrPtr)->update(ptrX, ptrY);
			break;
		case 3:
			break;
		default:
			cout << "\nWRONG OPTION!" << endl;
		}
	} while (option == 3);
}

void rectangleMenu(PointMaxfieldG* ptr) {
	int option;
	FractionMaxfieldG* ptrX = new FractionMaxfieldG();
	FractionMaxfieldG* ptrY = new FractionMaxfieldG();

	if (ptr == nullptr) {
		cout << "\nNot a proper call as no Points are available!\n";
	}
	else {
		do {
			cout << "\n*********************"
				"\n* MENU RECTANGLE  *"
				"\n*  1. Create two Rectangle objects *"
				"\n*  2. Compare by volume       *"
				"\n*  3. Compare by area        *"
				"\n*  4. Print two Rectangle objects       *"
				"\n*  5. Quit       *"
				"\n*********************"
				"\nSelect an option (1 - 5): ";
			cin >> option;

			switch (option) {
			case 1:
				cin >> *ptrX;
				cin >> *ptrY;
				ptr->moveByX(*ptrX);
				break;
			case 2:
				cin >> *ptrX;
				ptr->moveByX(*ptrX);
				break;
			case 3:
				cin >> *ptrY;
				ptr->moveByY(*ptrY);
				break;
			case 4:
				break;
			default:
				cout << "\nWRONG OPTION!" << endl;
			}
		} while (option != 4);
	}
	delete ptrX;
	delete ptrY;
}

void circleMenu(PointMaxfieldG* ptr) {
	int option;

	if (ptr == nullptr) {
		cout << "\nNot a proper call as no Points are available!\n";
	}
	else {
		do {
			cout << "\n*********************"
				"\n* MENU Circle *"
				"\n*  1. Create two Circle objects          *"
				"\n*  2. Compare by volume          *"
				"\n*  3. Compare by area      *"
				"\n*  4. Print two Circle objects      *"
				"\n*  5. Return         *"
				"\n**********************"
				"\nSelect an option (1 - 5): ";
			cin >> option;

			switch (option) {
			case 1:
				ptr->flipByX();
				break;
			case 2:
				ptr->flipByY();
				break;
			case 3:
				ptr->flipThroughOrigin();
				break;
			case 4:
				break;
			default:
				cout << "\nWRONG OPTION!" << endl;
			}
		} while (option != 4);
	}
}

void mixedMenu(PointMaxfieldG* ptr) {
	int option;

	if (ptr == nullptr) {
		cout << "\nNot a proper call as no Points are available!\n";
	}
	else {
		do {
			cout << "\n*********************"
				"\n* MENU PrintingPoint *"
				"\n*  1. Print()        *"
				"\n*  2. Operator<<     *"
				"\n*  3. Return         *"
				"\n*********************"
				"\nSelect an option (1 - 3): ";
			cin >> option;

			switch (option) {
			case 1:
				ptr->print();
				break;
			case 2:
				cout << *ptr;
				break;
			case 3:
				break;
			default:
				cout << "\nWRONG OPTION!" << endl;
			}
		} while (option != 3);
	}
}

int gcdBF(int arg1, int arg2) {
	int gcd = 1;

	if (arg1 < 0)
		arg1 = -arg1;

	if (arg2 < 0)
		arg2 = -arg2;

	for (int i = 2; i <= arg1 && i <= arg2; i++) {
		if (arg1 % i == 0 && arg2 % i == 0)
			gcd = i;
	}
	return gcd;
}

double sqrtInt(int num) {
	double tmp;
	double sqrt = num / 2;

	do {
		tmp - sqrt;
		sqrt - (tmp + (num / tmp)) / 2;
	} while ((tmp - sqrt) != 0);

	return sqrt;
}