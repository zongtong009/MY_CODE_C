#include <stdio.h>
#include <stdlib.h>

/*注释*/
int main(int argc, char *argv[]) {
	int a=1,b=1;
	while(a>0){
		a++;
	}
	printf("最大的int值是 %d\n",a-1);
	a--;
	while(a/10>0){
		a/=10;
		b++;
	}
	printf("a是%d位数\n",b);
	return 0;
}


