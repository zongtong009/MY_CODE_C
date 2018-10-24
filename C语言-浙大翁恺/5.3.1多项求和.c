#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*注释*/
int main(int argc, char *argv[]) {
	int n;
	double sum=0.0;
	
	printf("请输入一个整数： ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum=sum+1.0/i*pow(-1,i+1);
	} 
	printf("f(%d)= %f",n,sum);

	return 0;
}




