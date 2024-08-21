// Write a function that takes an integer as input, and returns the number of bits that are equal to one in the binary representation of that number. You can guarantee that input is non-negative.
// Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case

#include <iostream>
#include <bitset>

unsigned int countBits(unsigned long long n){
    unsigned int count = 0;
    std::bitset<64> bits(n);
    for (int i = 0; i < bits.size(); i++){
        if (bits[i] == 1){
            count++;
        }
    }
    return count;       
}

//Efficient Solution
// unsigned int countBits(unsigned long long n){
//     unsigned int count = 0;
//     while (n){
//         count += n & 1;
//         n >>= 1;
//     }
//     return count;
// }

typedef unsigned long long ull;

int main(){
    ull n = 4;
    std::cout<<countBits(n)<<std::endl;
    return 0;
}