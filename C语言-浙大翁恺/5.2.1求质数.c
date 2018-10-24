#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*注释*/
int main(int argc, char *argv[]) {
	for(int j=1;j<=100;j++){
		
		int x=j ,is_prime=1;
		//printf("请输入一个数： ");
		//scanf("%d",&x) ;
		if(x==1 ||x==4){
			printf("%d不是质数\n",x);
			continue; 
		}else if(x==2 ||x==3){
			printf("         %d是质数\n",x);
			continue;
		}
		//循环
		for(int i=2;i<=sqrt(x);i++) {
			if(x%i==0){
				printf("%d不是质数\n",x);
				is_prime=0;
				break;
			}
		}
		if(is_prime==1){
			printf("         %d是质数\n",x); 
		}
	}
	return 0;
}

