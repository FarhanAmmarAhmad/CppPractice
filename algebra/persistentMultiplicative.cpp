// Write a function, persistence, that takes in a positive parameter num and returns its multiplicative persistence, which is the number of times you must multiply the digits in num until you reach a single digit.

// For example (Input --> Output):

// 39 --> 3 (because 3*9 = 27, 2*7 = 14, 1*4 = 4 and 4 has only one digit, there are 3 multiplications)
// 999 --> 4 (because 9*9*9 = 729, 7*2*9 = 126, 1*2*6 = 12, and finally 1*2 = 2, there are 4 multiplications)
// 4 --> 0 (because 4 is already a one-digit number, there is no multiplication)



#include <iostream>

int persistence(long long n){
    int count = 0;
    int mod = 1;
    if(n < 10){
        return 0;
    }
    while(n > 9){
        while(n > 0){
            mod *= n % 10;
            n /= 10;
        }
        n = mod;
        mod = 1;
        count++;
    }
    return count;
}

int main(){
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = persistence(abs(num));
    std::cout << "The persistence of " << num << " is " << result << std::endl;
    return 0;
}