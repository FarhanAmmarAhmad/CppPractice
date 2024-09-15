#ifndef DRINK_H
#define DRINK_H

#include "MenuItems.h"
using namespace std;

class Drink : public MenuItems
{
	public:
		double ounces;

		Drink (string name, double cal, double ounces);
		void print();
};
#endif
