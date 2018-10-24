#include <stdio.h>
#include <stdlib.h>

/*注释*/
int main(int argc, char *argv[]) {
	int x,n=0,x_1;
	
	scanf("%d",&x) ;
	x_1=x;
	//循环 
	while(x>0){
		n+=1;
		x/=10;
	}
	printf("%d是%d位数",x_1,n);

	return 0;
}

