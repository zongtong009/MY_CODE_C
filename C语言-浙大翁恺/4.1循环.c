#include <stdio.h>
#include <stdlib.h>

/*ע��*/
int main(int argc, char *argv[]) {
	int x,n=0,x_1;
	
	scanf("%d",&x) ;
	x_1=x;
	//ѭ�� 
	while(x>0){
		n+=1;
		x/=10;
	}
	printf("%d��%dλ��",x_1,n);

	return 0;
}

