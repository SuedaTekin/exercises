#include <stdio.h>
#include <stdlib.h>


int main() {
    int count = 0;
    int i;
    for ( i = 100; i < 1000; i++) {
        if (i % 11 != 0) {
            printf("%d\n", i);
            count++;
        }
    }
    printf("Number of three-digit numbers different from each other: %d", count);
    return 0;
}
