// Write a method that takes an array of consecutive (increasing) letters as input and that returns the missing letter in the array.

// You will always get an valid array. And it will be always exactly one letter be missing. The length of the array will always be at least 2.
// The array will always contain letters in only one case.

// Example:

// ['a','b','c','d','f'] -> 'e'
// ['O','Q','R','S'] -> 'P'

#include <iostream>
#include <vector>


char findMissingLetter(const std::vector<char>& chars)
{
    char missingChar;
    for (int i = 0; i < chars.size() - 1; i++)
    {
        if (chars[i + 1] - chars[i] != 1)
        {
            missingChar = chars[i] + 1;
            break;
        }
    }
    return missingChar;
}


int main(){
    std::vector<char> chars = {'a','b','c','d','f'};
    char missingChar  = findMissingLetter(chars);
    std::cout << "Missing Char: " << missingChar << std::endl;
    return 0;
}