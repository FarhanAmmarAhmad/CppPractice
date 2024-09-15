#include <iostream>
#include "MenuItems.h"

using namespace std;

MenuItems::MenuItems(string name, double cal) : name(name), cal(cal) { cout << "Menuitems Constructor!" <<endl;}

void MenuItems::print()
{
    cout << "Item: " << this->name << endl
         << "Calories: " << this->cal << endl;
}
