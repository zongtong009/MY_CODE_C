#include <stdio.h>
#include <stdlib.h>

/*注释*/
int main(int argc, char *argv[]) {
	int type=2;
	switch(type){
		case 1:
			printf("    1");
			break;
		case 1+1:
			printf("    2");
			break;
		case 3:
			printf("    3");
			break;
		default:
			printf("都不对"); 
		//break;
		/*如果default在中间需要break*/
	}
	

	return 0;
}

