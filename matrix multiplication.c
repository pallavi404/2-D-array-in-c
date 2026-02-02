#include<stdio.h>
int main(){
	int r,c;
	printf("enter r and c : ");
	scanf("%d %d",&r,&c);
	printf("enter element of first matrix : ");
	int a[r][c],i,j,k;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int r1,c1;
	printf("enter r1 and c1 : ");
	scanf("%d %d",&r1,&c1);
	printf("enter element of second matrix : ");
	int b[r1][c1];
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("first matrix is : ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d	",a[i][j]);
		}
		printf("\n");
	}
	printf("second matrix is : ");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("%d	",b[i][j]);
		}
		printf("\n");
	}
	if(c!=r1){
		printf("multiplication not exist ");
		return 0;
	}
	int cr[r][c1];
	for(i=0;i<r;i++){
		for(j=0;j<c1;j++){
		cr[i][j]=0;
		}
	}
	
	for(int i=0;i<r;i++){
		for(j=0;j<c1;j++){
			for(k=0;k<c;k++){
				cr[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	printf("matrix multiplication is : ");
	for(i=0;i<r;i++){
		for(j=0;j<c1;j++){
			printf("%d	",cr[i][j]);
		}
		printf("\n");
	}
}
