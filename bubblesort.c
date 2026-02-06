#include<stdio.h>
#include<stdbool.h>
int main(){
	int i,j;
	bool flag;
	int a[5] = {1,2,3,4,5};
	for(i=0;i<5-1;i++){
		flag = true;
		for(j=0;j<5-i-1;j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				flag = false;
			}
		}
		if(flag == true){
			break;
		}
	}
	for(i=0;i<5;i++){
		printf("%d",a[i]);
	}
}
