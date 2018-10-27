#include <stdio.h>
#include <stdlib.h>

/*×¢ÊÍ*/
int main(int argc, char *argv[]) {
	int fenzi,fenmu;
	scanf("%d/%d",&fenzi,&fenmu);
	
	int a=fenzi,b=fenmu;
	int t;
	while(b>0){
		t=a%b;
		a=b;
		b=t;
	}
	printf("%d/%d\n",fenzi/a,fenmu/a);

	return 0;
}

