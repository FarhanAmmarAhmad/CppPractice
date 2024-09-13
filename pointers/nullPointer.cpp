//This is an example of Segmentation fault (core dumped) error when try to output a null poitner
#include <iostream>
#include <cassert>

int main(int argc, char *argv[]) {
    int* ptr = NULL;
    // assert(ptr != NULL);
   
    // if (ptr != NULL) {
    //     std::cout << *ptr << std::endl;
    // }
    // else
    //     std::cout << "Printing the NULL pointer may cause a segmentation fault" << std::endl;

    try
    {
        std::cout << *ptr << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}