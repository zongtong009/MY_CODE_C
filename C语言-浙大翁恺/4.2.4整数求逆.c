#include <stdio.h>
#include <stdlib.h>

/*注释*/
int main(int argc, char *argv[]) {
	int x=3502101;
	int remainder=0; //余数
	int reverse=0;   //求逆后的数 
	
	//printf("请输入一个整数： ");
	//scanf("%d",&x);
	while(x>0) {
		remainder=x%10;
		x=x/10;
		reverse=reverse*10+remainder;
		printf("%d",remainder);
	}
	
	printf("\n%d",reverse);



	return 0;
}


