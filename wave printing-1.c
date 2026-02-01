#include <stdio.h>

int main() {
    int r, c;

    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &r, &c);

    int i, j;
    int a[r][c];

 
    printf("Enter elements of the %d x %d matrix:\n", r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nOriginal matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Wave print the matrix
    printf("\nWave print of the matrix:\n");
    for (i = 0; i < r; i++) {
        if (i % 2 == 0) {
            for (j = 0; j < c; j++) {
                printf("%d\t", a[i][j]);
            }
        } else {
            for (j = c - 1; j >= 0; j--) {
                printf("%d\t", a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}

