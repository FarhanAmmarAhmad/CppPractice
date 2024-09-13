#include <iostream>

int main(int argc, char const *argv[]){
    int *ptr  = new int(10);
    delete ptr;
    ptr = nullptr;
    
    try
    {
        std::cout << *ptr << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    printf("This line will not be printed as program will be abored\n");  // This line will not be executed
    
    return 0;
}