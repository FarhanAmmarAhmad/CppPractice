#include <iostream>

#define MACRO

#ifdef MACRO
    #define area(width, height) std::cout << "The area of rectangle is : " << widht * height << std::endl
#else
    #define area(widht, height) //No-op if MACRO is not defined
#endif

int main(){
    int widht  = 10;
    int height = 20;
    area(widht, height);
    return 0;
}