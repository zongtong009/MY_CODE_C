#include <stdio.h>
#include <stdlib.h>
#include<time.h>
/*ע��*/
int main(int argc, char *argv[]) {
	srand(time(0)) ;
	int x=rand()%100;//ȡ��
	int a;
	while(1){
		printf("������һ������ ");
		scanf("%d",&a) ;
		if(a>x){
			printf("̫����");
		}else if(a<x){
			printf("̫С��");
		}else{
			break;
		}
	} 
	printf("%d",x);

	return 0;
}

