#include <stdio.h>
#include <stdlib.h>

/*ע��*/
int main(int argc, char *argv[]) {
	long long a=1,b=1;
	while(a>0){
		a+=10000;
	}
	
	printf("����intֵ�� %u\n",a-10000);
	a--;
	while(a/10>0){
		a/=10;
		b++;
	}
	printf("a��%dλ��\n",b);
	return 0;
}


