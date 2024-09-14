#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x; // dereference pointer
    *x = *y;
    *y = temp;
}

int partition(int arr[], int low, int high);

void quicksortRecursion(int arr[], int low, int high) {
    if (low < high) { // stops recursion condition
        int pivotIndex = partition(arr, low, high); // divide and conquer, returns index
        quicksortRecursion(arr, low, pivotIndex -1); // left side of array
        quicksortRecursion(arr, pivotIndex +1, high); // right side of array
    }
}

void quicksort(int arr[], int length) {  
    // wrapper function to make it easier
    //user doesnt input low and high just array and length
    quicksortRecursion(arr, 0, length -1); 
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // %d prints int as decimal
    }   
    printf("\n"); // prevents % at the end of line
}

int main() {
    // Test case
    int array[] = {3, 8 ,5, 1, 0, 7, 9, 2, 6, 4};
    int arraySize = sizeof(array) / sizeof(array[0]);

    printArray(array, arraySize);

    return 0;
}
