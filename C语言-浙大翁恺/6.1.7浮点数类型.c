#include <stdio.h>
#include <stdlib.h>

/*注释*/
int main(int argc, char *argv[]) {
	printf("sizeof(float) = %d\n",sizeof(float));
	printf("sizeof(double)= %d\n",sizeof(double));
	/* 浮点数范围： 
	float   7位有效数字 
		正负 (1.20*10**(-38) >>> 3.40*10**38 ),
		0,   
		正负无穷大 +-(inf),   //12.0/0.0   -12.0/0.0
		nan     //不存在的浮点数   0.0/0.0
	double  15位有效数字 
		正负 (2.2*10**(-308) >>> 1.79*10**308 ),
		0,   
		正负无穷大 +-(inf), 
		nan	    //不存在的浮点数 
	*/ 
	printf("123\b\n567\n");
	printf("123\b4\n567\n");
	printf("123\b \n567\n");
	return 0;
}

