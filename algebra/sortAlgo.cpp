#include <iostream>
#include <algorithm>

int main(){
    int arr[5]  = {3,2,1,5,4};
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    std::sort(arr, arr + arraySize);

    for (int i = 0; i < arraySize; i++){
        std::cout << arr[i] << " ";
    }   
    return 0;
}