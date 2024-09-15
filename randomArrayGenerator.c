#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandomArray(int low, int high, int count) {
    // low: lowest number possible in the array
    // high: highest number possible in the array
    // count: total number of elements in the array
    FILE *file = fopen("randomArray.txt", "w"); // opens and writes into txt file
    
    if (file == NULL) { // checks if the file can be opened 
        printf("Error opening file!\n");
        exit(1);
    }

    for (int i = 0; i < count; i++) { // generates random array
        int randomValue = (rand() % (high - low + 1)) + low;
        fprintf(file, "%d ", randomValue);
    }

    fclose(file); // closes file
}

int main(int argc, char *argv[]) {
    // argc: num of command args passed in
    // argv: array of strings that contain the actual command args
    return 0;
}

