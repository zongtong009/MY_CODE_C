#include <stdio.h>
#include <stdlib.h>
/*求斐波那契数列，避免重复计算版本*/
unsigned long fiboProcess(unsigned long *array,unsigned long n) {
	if(n < 2)
		return n;
	else {
		/*递归保存值*/
		array[n] = fiboProcess(array,n-1) + array[n-2];
		return array[n];
	}
}

unsigned long  fibo(unsigned long  n) {
	if(n <= 1)
		return n;
	unsigned long ret = 0;
	/*申请数组用于保存已经计算过的内容*/
	unsigned long *array = (unsigned long*)calloc(n+1,sizeof(unsigned long));
	if(NULL == array) {
		return -1;
	}
	array[1] = 1;
	ret = fiboProcess(array,n);
	free(array);
	array = NULL;
	return ret;
}
int main(int argc,char *argv[]) {
	if(1 >= argc) {
		printf("usage:./fibo num\n");
		return -1;
	}
	unsigned long  n = atoi(argv[1]);
	unsigned long  fiboNum = fibo(n);
	printf("the %lu result is %lu\n",n,fiboNum);
	return 0;
}

