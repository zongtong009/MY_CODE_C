#include<stdio.h>

int main(){
	int n,sum;
	
	printf("输入整数: ");
	scanf("%d",&n);
	
	sum=(1+n)*n/2; 
	printf("1到%d的总和为 %d",n,sum);
	
	return 0; 	
}


