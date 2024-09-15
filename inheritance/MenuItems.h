#ifndef MENUITEMS_H
#define MENUITEMS_H

#include <string>

class MenuItems
{
    public:
        std::string name;
        double cal;
    
        MenuItems(std::string name, double cal);
        void print();
};

#endif
