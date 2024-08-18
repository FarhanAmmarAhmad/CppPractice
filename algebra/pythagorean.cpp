// This program can sort an array of three integers in ascending order and check if they form a Pythagorean Triple.

//[5, 3, 4] : it is possible to form a Pythagorean Triple using these 3 integers: 32 + 42 = 52

// [3, 4, 5] : it is possible to form a Pythagorean Triple using these 3 integers: 32 + 42 = 52

// [100, 3, 999] : it is NOT possible to form a Pythagorean Triple and it will return false

#include <iostream>
#include <algorithm>
#include <stdbool.h>

bool PythagoreanTriple(const int a, const int b, const int c)
{
    int array[3] = {a,b,c};
    int arraySize = sizeof(array) / sizeof(array[0]);
    std::sort(array, array + arraySize);
    if(array[0]*array[0] + array[1]*array[1] == array[2]*array[2])
        return true;
    else
        return false;
  
}

// Alternative implementation and Efficient way to check Pythagorean Triple
// bool PythagoreanTriple(const int a, const int b, const int c){
//     return a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a;
// }

int main(){
    int a, b, c;
    bool result = false;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    result  = PythagoreanTriple(a, b, c);
    if (result == true)
        printf("Pythagorean Triple are valid\n");
    else
        printf("Not a Pythagorean Triple\n");
    return 0;

}