#include <stdio.h>
#include <stdlib.h>

/*ע��*/
int main(int argc, char *argv[]) {
	int x;
	int sum=1;
	
	while(1){
		printf("������һ��С��12�������� ");
		scanf("%d",&x);
		if(x<17){
			break;
		}
	}
	//ѭ�� 
	int i;
	for( i=1; i<=x; i++){
		sum*=i;
	}
	printf("%d�Ľ׳�Ϊ%d",x,sum);

	return 0;
}

