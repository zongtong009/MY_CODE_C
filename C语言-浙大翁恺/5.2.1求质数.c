#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*ע��*/
int main(int argc, char *argv[]) {
	for(int j=1;j<=100;j++){
		
		int x=j ,is_prime=1;
		//printf("������һ������ ");
		//scanf("%d",&x) ;
		if(x==1 ||x==4){
			printf("%d��������\n",x);
			continue; 
		}else if(x==2 ||x==3){
			printf("         %d������\n",x);
			continue;
		}
		//ѭ��
		for(int i=2;i<=sqrt(x);i++) {
			if(x%i==0){
				printf("%d��������\n",x);
				is_prime=0;
				break;
			}
		}
		if(is_prime==1){
			printf("         %d������\n",x); 
		}
	}
	return 0;
}

