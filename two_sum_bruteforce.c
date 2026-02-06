#include<stdio.h>
int main(){
	int a[8] = { 1,2,3,4,5,6,7,8};
	int target = 15;
	int i=0,j=7;
	while(i<j){
		if(a[i] + a[j] == target){
			printf("%d %d",i,j);
			break;
		}
		if(a[i] + a[j]>target){
			j--;
		}
		if(a[i] + a[j]>target){
			i++;
		}
	}
}
