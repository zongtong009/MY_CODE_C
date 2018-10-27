#include <stdio.h>
#include <stdlib.h>

/*注释*/
int main(int argc, char *argv[]) {
	int a=0x0005,b=15,c;
	//0000 0101;0001 0000 
	c=(a&b);
	printf("%d\n",c);
	
	//必须调用stdlib.h函数库
	int m=0xA5;//16
    char str[30];
    itoa(m,str,2);  //2即是代表转换为2进制
    printf("%s\n",str);//字符串
    itoa(m<<2,str,2);
    printf("%s",str);
	return 0;
}




