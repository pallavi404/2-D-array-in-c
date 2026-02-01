#include<stdio.h>
int main(){
	int r,c;
	printf("enter r and c : ");
	scanf("%d%d",&r,&c);
	int i,j,a[r][c];
	printf("enter element of first matrix : ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int b[c][r];
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
		b[i][j] = a[j][i];
		}
	}
	printf("we save transpose in another matrix here : \n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
		printf("%d	",b[i][j]);
		}
		printf("\n");
	}
}
