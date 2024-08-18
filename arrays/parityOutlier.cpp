
// You are given an array (which will have a length of at least 3, but could be very large) containing integers. The array is either entirely comprised of odd integers or entirely comprised of even integers except for a single integer N. Write a method that takes the array as an argument and returns this "outlier" N.
// Examples

// [2, 4, 0, 100, 4, 11, 2602, 36] -->  11 (the only odd number)

// [160, 3, 1719, 19, 11, 13, -21] --> 160 (the only even number)

#include <iostream>
#include <vector>


int FindOutlier(std::vector<int> arr)
{
    int result;
    int even = 0;
    int odd = 0;
    do {
        for (auto &i: arr){
            if (i %2 != 0){
                odd++;
            } else {
                even++;
            // remove the extra closing brace
        }
        }
    }
    while (even < 2 && odd < 2);
    if (even > odd){
        for (auto &i: arr){
            if (i %2 != 0){
                result = i;
            }
        }
    } else {
        for (auto &i: arr){
            if (i %2 == 0){
                result = i;
            }
        }
    }
    return result;
}

// The more efficient solutoin could be
// int FindOutlier(std::vector<int> arr)
// {
//     int even;
//   	int odd;
  
//   	int evenCount = 0;
//   	int oddCount = 0;
  
//   	for (auto a : arr)
//   	  	a % 2 == 0 ? (evenCount++, even = a) : (oddCount++, odd = a);
  
//   	return evenCount < oddCount ? even : odd;
// }

int main(){
    std::vector<int> array;
    std::cout << "Enter the array (enter any non-integer value to finish): ";
    int num;
    while (std::cin >> num) {
        array.push_back(num);
    } 
    // for (int i = 0; i < array.size(); i++) {
    //     std::cout << array[i] << " ";
    // }
    int result  = FindOutlier(array);
    std::cout << result << std::endl;
    return 0;
}