#include <stdio.h>

int main() {
    int r;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &r);

    int i, j;
    int a[r][r];

    // Input matrix elements
    printf("Enter elements of the %d x %d matrix:\n", r, r);
    for(i = 0; i < r; i++) {
        for(j = 0; j < r; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Print original matrix
    printf("\nOriginal matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < r; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Print transpose of the matrix
    printf("\nTranspose of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < r; j++) {
            printf("%d\t", a[j][i]); 
        }
        printf("\n");
    }

    return 0;
}

