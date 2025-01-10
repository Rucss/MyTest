#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printRandoms(int min, int max, int count) {
    printf("Random numbers between %d and %d: ", min, max);

    // Taking current time as seed
    unsigned int seed = time(0);

    for (int i = 0; i < count; i++) {
      
        // Generate a random number in the range [min, max]
        int rd_num = rand_r(&seed) % (max - min + 1) + min;
        printf("%d ", rd_num);
    }
}

int main() {
    int min = 5, max = 7, count = 10;
    printRandoms(min, max, count);
    return 0;
}
