#include<stdio.h>
int main() {
	int m,n;
	scanf("%d%d",&m,&n);
	while(m!=n) {
		while(m>n)
			m-=n;
		while(n>m)
			n-=m;
	}
	printf("m=%d\n",m);

	return 0;
}
//65 14
//51 14
//37 14
//23 14
//9  14
//9  5
//4  5
//4  1
//3  1
//2  1
//1  1

