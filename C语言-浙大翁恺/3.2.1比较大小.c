#include <stdio.h>
#include <stdlib.h>

/*ע��*/
int main(int argc, char *argv[]) {
	int a,b,c,max;
	printf("��������������"); 
	scanf("%d %d %d",&a,&b,&c);
	max=a;
	if(b>a){
		max=b;
		if(c>a){
			max=c;
		}
	} 
	printf("�����Ϊ%d",max);

	return 0;
}

