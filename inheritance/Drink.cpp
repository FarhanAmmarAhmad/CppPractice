#include "Drink.h"
#include <iostream>

using namespace std;

Drink::Drink(string name, double cal, double ounces) : MenuItems(name, cal), ounces(ounces) { cout << "Drink Constructor!" << endl;}

void Drink::print()
{
	MenuItems::print();
	cout << "Ounces: " << this->ounces << endl;
}
