#include <stdio.h>
#include <stdlib.h>

/*ע��*/
int main(int argc, char *argv[]) {
	int x=3502101;
	int remainder=0; //����
	int reverse=0;   //�������� 
	
	//printf("������һ�������� ");
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


