#include <stdio.h>
int main() {
    int r,c;

    printf("Enter the row and column of the matrix: ");
    scanf("%d%d", &r,&c);

    int i, j;
    int a[r][c];
    printf("Enter elements of the %d x %d matrix:\n", r, c);
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nOriginal matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    int b[c][r];
    for(i=0;i<c;i++){
    	for(j=0;j<r;j++){
    		b[i][j] = a[j][i];
		}
	}
	printf("\n90 degree rotation\n");
	
	for(i=0;i<c;i++){
		for(j=r-1;j>=0;j--){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}

