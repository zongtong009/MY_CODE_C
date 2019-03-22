#include<stdio.h>
int n;
int main(void) {
	printf("input a string: ");

	while(getchar()!='\n') {
		n++;
	}
	printf("output: %d\n",n);
}

