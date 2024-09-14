#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x; // dereference pointer
    *x = *y;
    *y = temp;
}

void quicksort(int arr[], int length);

void quicksortRecursion(int arr[], int low, int high);

int partition(int arr[], int low, int high);

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
