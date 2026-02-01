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
	int m=0,k=0;
	for(i=0;i<r;i++){
		int count = 0;
		for(j=0;j<c;j++){
			if(a[i][j]==0) count++;
		}
		if(m<count){
			m=count;
			k=i;
		}
	}
	printf("%d row has maximum no of zeoros that is %d ",k,m);
}
