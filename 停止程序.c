#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

void pass(){
	
	printf("\n456");
	exit(0);
}
/****************************************************************/
/**
*只更改pass函数，使第二个print输出为456
*/
int main(int argc, char *argv[]) {
	int x=123;
	printf("%d",x);
	pass();
	printf("%d",x);
	

	return 0;
}

