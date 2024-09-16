#include <stdio.h>
#include "quickSort.h"
#include "mergeSort.h"

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // %d prints int as decimal
    }   
    printf("\n"); // prevents % at the end of line
}

int main() {
    // Test Case 1: Normal unsorted array
    int array1[] = {3, 2, 4, 8, 1, 5, 9, 2, 6, 0, 7};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    
    printf("Original array 1:     ");
    printArray(array1, size1);
    //quick_sort(array1, size1);
    merge_sort(array1, size1);
    //printf("Quick Sorted array 1: ");
    printf("Merge Sorted array 1: ");
    printArray(array1, size1);
    printf("\n");


    // Test Case 2: Empty array
    int array2[] = {};
    int size2 = sizeof(array2) / sizeof(array2[0]);
    
    printf("Empty array 2:        ");
    printArray(array2, size2);
    //quick_sort(array2, size2);
    merge_sort(array1, size1);
    //printf("Quick Sorted array 2: ");
    printf("Merge Sorted array 2: ");
    printArray(array2, size2);
    printf("\n");


    // Test Case 3: Already sorted array
    int array3[] = {1, 2, 3, 4, 5};
    int size3 = sizeof(array3) / sizeof(array3[0]);
    
    printf("Sorted array 3:       ");
    printArray(array3, size3);
    //quick_sort(array3, size3);
    merge_sort(array1, size1);
    //printf("Quick Sorted array 3: ");
    printf("Merge Sorted array 3: ");
    printArray(array3, size3);
    printf("\n");


    // Test Case 4: Array with duplicate elements
    int array4[] = {1, 1, 1, 1, 1};
    int size4 = sizeof(array4) / sizeof(array4[0]);
    
    printf("Duplicate array 4:    ");
    printArray(array4, size4);
    //quick_sort(array4, size4);
    merge_sort(array1, size1);
    //printf("Quick Sorted array 4: ");
    printf("Merge Sorted array 4: ");
    printArray(array4, size4);
    printf("\n");

    return 0;
}
