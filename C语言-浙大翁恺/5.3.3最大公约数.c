#include <stdio.h>
#include <stdlib.h>

/*最大公约数*/
int main(int argc, char *argv[]) {
	int a,b,min;
	printf("请输入两个整数： ");
	scanf("%d %d",&a,&b) ;
	//
	if (a<b){
		min=a;
	}else{
		min=b;
	}
	//
	int ret=0;
	for(int i=1;i<=min;i++){
		if(a%i==0 && b%i==0){
			ret=i;
		}
	}
	printf("%d和%d的最大公约数为%d",a,b,ret);

	return 0;
}

