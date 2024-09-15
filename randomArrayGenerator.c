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

    if (argc != 4) { // if args are not 4 the user did not input one of the followings below
        printf("%s <low> <high> <count>\n", argv[0]); // arg here would be the exec
        printf("Arguments:\n");
        printf("  <low>   : Lowest possible number in the array\n");
        printf("  <high>  : Highest possible number in the array\n");
        printf("  <count> : Number of elements in the array\n");
        exit(1); // Exit error status
    }
    
    // parsing in argv
    int low = atoi(argv[1]);  
    int high = atoi(argv[2]);
    int count = atoi(argv[3]);
    
    if (low > high) { // basic conditions
        printf("Error: The low value cannot be greater than the high value.\n");
        return 1;
    }

    srand(time(NULL)); // seed the rand

    generateRandomArray(low, high, count);

    printf("Random array generated in randomArray.txt\n"); // print to know if successful

    return 0;
}

