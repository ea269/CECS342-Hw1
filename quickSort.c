#include <stdio.h>
#include "quicksort.h"

void swap(int *x, int *y) {
    int temp = *x; // dereference pointer
    *x = *y;
    *y = temp;
}

int partition(int arr[], int low, int high) {
    int pivotValue = arr[high]; // assume pivot is last element in portion of array
    
    int i = low; // i is incremented when its less than or equal to pivot value
    for (int j = low; j < high; j++) { // j after every iteration of loop
        if (arr[j] <= pivotValue) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }

    swap(&arr[i], &arr[high]); // swap when k is no longer more than high

    return i;
}

void quicksortRecursion(int arr[], int low, int high) {
    if (low < high) { // stops recursion condition
        int pivotIndex = partition(arr, low, high); // divide and conquer, returns index
        quicksortRecursion(arr, low, pivotIndex -1); // left side of array
        quicksortRecursion(arr, pivotIndex +1, high); // right side of array
    }
}

void quicksort(int *a, int n) {  
    // wrapper function to make it easier
    //user doesnt input low and high just array and length
    quicksortRecursion(a, 0, n - 1); 
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // %d prints int as decimal
    }   
    printf("\n"); // prevents % at the end of line
}
