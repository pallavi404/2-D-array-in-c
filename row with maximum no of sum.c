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
		int m=0,k;
	for(i=0;i<r;i++){
		int s = 0;
		for(j=0;j<c;j++){
			s +=a[i][j];
		}
		if(m<s){
			m=s;
			k=i+1;
		}
	}
	printf("maximum sum of %d row is : %d",k,m);
}
