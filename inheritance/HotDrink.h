#ifndef HOTDRINK_H
#define HOTDRINK_H

#include "Drink.h"

class HotDrink : public Drink
{
	public:
		double temp;

		HotDrink(string name, double cal, double ounces, double temp);
		void print();
};
#endif
