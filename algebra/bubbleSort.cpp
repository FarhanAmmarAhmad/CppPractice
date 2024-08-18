#include <iostream>
#include <stdbool.h>

int main(){
    int arr[5]  = {1,2,4,3,5};     
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    int arrayLength  = arraySize - 1;
    bool swapped  = false;
    int countIterations = 0;
    do{
        for (int j = 0; j< arraySize; j++){
            swapped = false;
            for (int i = 0; i < arrayLength-j; i++){
                if(arr[i] > arr[i+1]){
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                    swapped = true;
                    countIterations++;
                }
                
            }
        }
    }
    while(swapped);

    for (int i = 0; i < arraySize; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "\nNumber of iterations: " << countIterations << std::endl;
    return 0;
}