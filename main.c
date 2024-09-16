#include <stdio.h>
#include "quickSort.h"

void readArrayFromFile(const char *filename, int arr[], int *size) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) { // condition if file cannot be open 
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    int number;
    *size = 0;

    while (fscanf(file, "%d", &number) == 1 && *size < MAX_SIZE) {
        arr[*size] = number;
        (*size)++;
    }

    fclose(file);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // %d prints int as decimal
    }   
    printf("\n"); // prevents % at the end of line
}

int main() {
    array = readArrayFromFile("randomArray.txt", &arraySize); // Read array from file
    int arraySize = sizeof(array) / sizeof(array[0]); // this will get the size
    
    printf("Array:\n");
    printArray(array, arraySize);

    quick_sort(array, arraySize);

    printf("Quick sorted Array:\n");
    printArray(array, arraySize);

    return 0;
}
