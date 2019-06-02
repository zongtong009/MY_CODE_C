#include <stdio.h>

/****************************************************************/
static int a = 10;
void fun(){
	
	a--;
	printf("%d\n",a);
}
int main(void) {
	fun();
	fun();
	a = 10;
	fun();
	

	return 0;
}

