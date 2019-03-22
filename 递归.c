#include <stdio.h>
/****************************************************************/

void fun(long long *a,long long *b) {
	long long temp=*b;
	*b=*a+*b;
	*a=temp;
}
int main(void) {
	long long a=0,b=1;
	int in;
	printf("0\t%llu\t%llu\n",a,b);
	scanf("%d",&in);
	for( int i=0;i<in;i++){
		fun(&a,&b);
		printf("%d\t%llu\t%llu\n",i+1,a,b);
	}

	return 0;
}

