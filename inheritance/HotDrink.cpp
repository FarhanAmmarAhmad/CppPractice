#include "HotDrink.h"
#include <iostream>

using namespace std;

HotDrink::HotDrink(string name, double cal, double ounces, double temp) : 
	Drink(name, cal, ounces), temp(temp)
	{
	       	cout << "Hot Drink Constructor!"<<endl;
	}
void HotDrink::print()
{
	Drink::print();
	cout << "Temperature: " <<this->temp << endl;
}
