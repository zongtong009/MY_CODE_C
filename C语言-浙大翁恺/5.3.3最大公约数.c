#include <stdio.h>
#include <stdlib.h>

/*���Լ��*/
int main(int argc, char *argv[]) {
	int a,b,min;
	printf("���������������� ");
	scanf("%d %d",&a,&b) ;
	//
	if (a<b){
		min=a;
	}else{
		min=b;
	}
	//
	int ret=0;
	for(int i=1;i<=min;i++){
		if(a%i==0 && b%i==0){
			ret=i;
		}
	}
	printf("%d��%d�����Լ��Ϊ%d",a,b,ret);

	return 0;
}

