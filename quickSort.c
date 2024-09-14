#include <stdio.h>

void swap(int *x, int *y);

void quicksort(int arr[], int length);

void quicksortRecursion(int arr[], int low, int high);

int partition(int arr[], int low, int high);

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }   
}

int main() {
    // Test case
    int arr[] = {3, 8 ,5, 1, 0, 7, 9, 2, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    return 0;
}
