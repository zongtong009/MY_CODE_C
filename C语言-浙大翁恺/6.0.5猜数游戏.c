#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*注释*/
int main(int argc, char *argv[]) {
	srand(time(0));
	int a=55;//rand()%100;
	int guess,n;
	int sum=1;
	//
	printf("请输入一个数（0,99）： ");
	scanf("%d %d",&guess,&n);
	while(1){
		if(guess<0){
			printf("Game over\n");
			break;
		}else if (guess>a){
			printf("Too big\n");	
		}else if(guess<a){
			printf("Too small\n");
		}else if(sum==1){
			printf("sum=%d,Bingo!\n",sum);
			break; 
		}else if(sum<=3){
			printf("sum=%d,Lucky you!\n",sum);
			break;
		}else if(sum<=n){
			printf("sum=%d,Good guess\n",sum);
			break;
		}
		sum+=1;
		if(sum>n){
			printf("Game over\n");
			break;
		}
		scanf("%d",&guess);
		
	}
	printf("a=%d",a);

	return 0;
}

