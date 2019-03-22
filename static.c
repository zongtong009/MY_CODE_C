#include <stdio.h>

/****************************************************************/
void fun(){
	static int a = 10;
	a--;
	printf("%d\n",a);
}
int main(void) {
	fun();
	fun();
	int a = 1;
	fun();
	

	return 0;
}

