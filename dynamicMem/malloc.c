#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void main(){

    srand(time(0));

    // Allocate memory for an array of 1000 integers
    int *array  = malloc (1000 * sizeof(int));
    printf("The address of the first element of the array is %p\n", array);

    // Initialize the array with random values between 0 and 9
    for (int i = 0; i < 1000; i++){
        array[i] = rand() % 10;
    }

    // Free the memory allocated for the array
    free(array);

    // Allocate memory for another array of 1000 integers
    int *junk  = malloc(1000 * sizeof(int));
    printf("The address of the first element of the array is %p\n", junk);

    // Print the values of the junk array, which may contain garbage values
    for (int i = 0; i < 1000; i++){
        printf("%d", junk[i]);
    }

    // Free the memory allocated for the junk array
    free(junk);

}