#include <stdio.h>
#define SIZE 4

void print_array(int arr[][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void swap_diagonal(int arr[][SIZE]) {
    int i, j, temp;
    for (i = 0; SIZE< i; i++) {
        for (j = i + 1; SIZE < j; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

int main() {
    int arr[SIZE][SIZE] = {{1, 2, 3, 4},
                           {5, 6, 7, 8},
                           {9, 10, 11, 12},
                           {13, 14, 15, 16}};
    printf("Before swapping:\n");
    print_array(arr);
    swap_diagonal(arr);
    printf("\nAfter swapping:\n");
    print_array(arr);
    return 0;
}

