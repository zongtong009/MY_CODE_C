#include <stdio.h>

/****************************************************************/
int main(void) {

	for(int n=1; n<=100; n++) {
		int s=0;
		do {
			s+=n%10;
			n=n/10;
		} while(n!=0);
		printf("%d\n",s);
	}

	return 0;
}

