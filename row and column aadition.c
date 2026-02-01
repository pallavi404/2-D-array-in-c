#include<stdio.h>
int main(){
	int r,c;
	printf("enter r and c : ");
	scanf("%d%d",&r,&c);
	int i,j,a[r][c];
	printf("enter element of matrix : ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int d,e;
	printf("enter d and e");
	scanf("%d%d",&d,&e);
	if(d>=r || e>=c){
		printf("invalid");
		return 0;
	}
	
	int s = 0;
	for(i=d;i<r;i++){
		for(j=e;j<c;j++){
			s +=a[i][j];
		}
		
	}
	printf("%dis sum",s);
}
