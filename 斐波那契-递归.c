#include <stdio.h>
#include <stdlib.h>
/****************************************************************/
int fib(unsigned n) {
	if (n<1) {
		printf("输入有误！");
		return 0;
	}
	if (n==1 || n==2){
		return 1;
	}
	else{
		int fin = fib(n-1)+fib(n-2);
		return fin;
	}
}
int main(int argc, char *argv[]) {
	int n;
	printf("请输入一个整数： ");
	scanf("%d",&n);
	unsigned f = fib(n);
	if( f!=0){
		printf("第%d个斐波那契数是%d ",n,f);
	}

	return 0;
}

