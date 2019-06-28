#include<stdio.h>
int main(void) {
	int a,b,c;
	//只要输入正确的三个整数，循环就会一直进行下去
	while(scanf("%d%d%d",&a,&b,&c)==3)
		printf("%d\n",a+b+c);
		
		
	return 0;
}

//while(scanf("%d",&n)!=EOF)
//EOF = -1
