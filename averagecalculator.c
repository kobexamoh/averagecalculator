// Prompt for this generated via ChatGPT
/*
Write a C program that defines a function called calculateAverage that takes an array of integers and its size as parameters. The function should calculate the average of all the numbers in the array and return it. Then, in the main function, declare an array of integers with a predefined maximum size (e.g., 100), prompt the user to enter the values for the array, call the calculateAverage function to find the average, and finally, print the average value.

You can assume a maximum size for the array, such as 100, to simplify the implementation without using dynamic memory allocation.

Remember to handle input validation to ensure that the user enters valid integer values for the array elements.
*/
#include <stdio.h>
#include <stdlib.h>

// define the maximum size of the array
#define maxArraySize 5

// function prototype 
// float calculateAverage(int numbers[], int size);

int main(void) {
    int arrayForAverages[maxArraySize]; // array of empty values maximum size is 5
    printf("Enter the values for the array (up to a maximum of 5 values):\n");

    // h/t King C Programming book for the idiom on reading data into arrays
    for (int i = 0; i < maxArraySize; i++) {
        scanf("%d", &arrayForAverages[i]);
    }

    // display the values that the user put into the array
    printf("Here is what you put into the array:\n");
    for (int i = 0; i < maxArraySize; i++) {
        printf("Array value %d:  %d\n", i+1, arrayForAverages[i]);
    }
    return 0;
}

// function definition
float calculateAverage(int numbers[], int size) {
    float average;

    return average;
}