#include<stdio.h>
int main(){
	int i,j,r,c,k;
	printf("enter r and c : ");
	scanf("%d%d",&r,&c);
	int a[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("original matrix is : \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nwave printing column wise : \n");
	for(j=0;j<c;j++){
		if(j%2==0){
			for(i=0;i<r;i++){
				printf("%d\t",a[i][j]);
			}
		}
		else{
			for(i=r-1;i>=0;i--){
				printf("%d\t",a[i][j]);
			}
		}
	}
}
