// Prompt for this generated via ChatGPT
/*
Write a C program that defines a function called calculateAverage that takes an array of integers and its size as parameters. The function should calculate the average of all the numbers in the array and return it. Then, in the main function, declare an array of integers with a predefined maximum size (e.g., 100), prompt the user to enter the values for the array, call the calculateAverage function to find the average, and finally, print the average value.

You can assume a maximum size for the array, such as 100, to simplify the implementation without using dynamic memory allocation.

Remember to handle input validation to ensure that the user enters valid integer values for the array elements.
*/
#include <stdio.h>
#include <stdlib.h>

/* M A C R O S */
#define maxArraySize 5 // define the maximum size of the array
#define SIZEOFARRAY sizeof(array) / sizeof(*array) // didn't want to use pointers yet, but this is for the array size

// function prototype 
float calculateAverage(int numbers[], int size);

int main(void) {
    int arrayForAverages[maxArraySize]; // array of empty values maximum size is 5
    float result;
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

    // pass array into function in order to get the average
    result = calculateAverage(arrayForAverages, maxArraySize);

    printf("\nThe average of the numbers you entered is %f\n", result);

    return 0;
}

// function definition
float calculateAverage(int numbers[], int size) {
    float average;
    int sum;

    // average is defined as everything (in the array numbers) summed together and divided by size

    // h/t King C Programming book (page 162) for the idiom of the sum of elements in an array
    for (int i = 0; i < sizeof(numbers); i++) {
        sum += numbers[i];
    }

    average = sum / sizeof(numbers);

    return average;
}