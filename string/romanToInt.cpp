// Create a function that takes a Roman numeral as its argument and returns its value as a numeric decimal integer. You don't need to validate the form of the Roman numeral.

// Modern Roman numerals are written by expressing each decimal digit of the number to be encoded separately, starting with the leftmost digit and skipping any 0s. So 1990 is rendered "MCMXC" (1000 = M, 900 = CM, 90 = XC) and 2008 is rendered "MMVIII" (2000 = MM, 8 = VIII). The Roman numeral for 1666, "MDCLXVI", uses each letter in descending order.
#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

int solution(std::string s){
        std::unordered_map<char, int> roman = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int total = 0;
    int n = s.size();

    for (int i = 0; i < n; ++i) {
        // If the current numeral is less than the next, subtract it
        if (i < n - 1 && roman[s[i]] < roman[s[i + 1]]) {
            total -= roman[s[i]];
        } else {
            total += roman[s[i]];
        }
    }

    return total;
}

int main(int argc, char const *argv[]){
    std::string inputString = argv[1];
    // std::cout << "Enter the Roman numeral: ";
    // std::cin >> inputString;    
    std::cout << solution(inputString) << std::endl;
    return 0;
}