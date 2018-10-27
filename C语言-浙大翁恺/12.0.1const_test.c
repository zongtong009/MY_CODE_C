#include <stdio.h>
#include <stdlib.h>

/*×¢ÊÍ*/
int main(int argc, char *argv[]) {
	const int a=5;
	int *p = (int *)&a; 
	
	printf("%d\n",a,*p);

	*p=66;
	printf("%d %d\n",a,*p);
	return 0;
}

