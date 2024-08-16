#include <iostream>
#include <cmath>

long findNextSquare(long sq) {
    long root = sqrt(sq);
    if (root * root != sq) {
        return -1;
    }
    else{    
        return (root + 1) * (root + 1);
    }
    
}

int main() {
    long sq = 0;
    std::cout << "Enter a number: ";
    scanf("%ld", &sq);
    std::cout << findNextSquare(sq) << std::endl;
    return 0;
}