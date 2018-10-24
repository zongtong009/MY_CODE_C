#include <stdio.h>
#include <stdlib.h>

/*注释*/
int main(int argc, char *argv[]) {
	int x;
	int sum=1;
	
	while(1){
		printf("请输入一个小于12的整数： ");
		scanf("%d",&x);
		if(x<17){
			break;
		}
	}
	//循环 
	int i;
	for( i=1; i<=x; i++){
		sum*=i;
	}
	printf("%d的阶乘为%d",x,sum);

	return 0;
}

