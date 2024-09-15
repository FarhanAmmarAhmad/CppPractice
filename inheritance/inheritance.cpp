#include <iostream>
using namespace std;

class MenuItems
{
	public:
		string name;
		double cal;
	
	MenuItems(string name, double cal) : name(name), cal(cal) {}

	void print()
	{
		cout << "Item: " << this->name << endl
			<< "Calories: " << this->cal << endl;
	}	
		
};

class Drink : public MenuItems
{
	public:
		double ounces;

	Drink (string name, double cal, double ounces) : MenuItems (name, cal), ounces(ounces) {}

	void print()
	{
		MenuItems::print();
		cout << "Ounces: " << this->ounces << endl;
	}
};

class HotDrink : public Drink
{
	public:
		double temperature;

	HotDrink(string name, double cal, double ounces, double temperature) : Drink(name, cal, ounces), temperature(temperature) {}

	void print()
	{
		Drink::print();
		cout << "Temperature: " << this->temperature << endl;
	}
};

int main(int argc, char const **argv)
{
	HotDrink hotChocolate("Hot Coffee", 400, 200, 25.3);
	hotChocolate.print();
	return 0;
}

