#include <stdio.h>
#include <stdlib.h>
#include<time.h>
/*注释*/
int main(int argc, char *argv[]) {
	srand(time(0)) ;
	int x=rand()%100;//取余
	int a;
	while(1){
		printf("请输入一个数： ");
		scanf("%d",&a) ;
		if(a>x){
			printf("太大了");
		}else if(a<x){
			printf("太小了");
		}else{
			break;
		}
	} 
	printf("%d",x);

	return 0;
}

