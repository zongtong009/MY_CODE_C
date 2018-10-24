#include <stdio.h>
#include <stdlib.h>

/*注释*/
int main(int argc, char *argv[]) {
	const int MONEY=100;
	int pay;
	
	printf("请输入商品价格："); 
	scanf("%d",&pay);
	//判断 
	if (pay>MONEY){
		printf("超出了%d,请输入小于%d的数\n",MONEY,MONEY);
	}else{
		printf("应找回零钱%d元",MONEY-pay);
	}
	
	return 0;
}

