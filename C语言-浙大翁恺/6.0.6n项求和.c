#include <stdio.h>
#include <stdlib.h>

/*×¢ÊÍ*/
int main(int argc, char *argv[]) {
	while(1){
		int n,a=1,b=1,c;
		double sum=0.0;
		scanf("%d",&n);
		
		for(int i=0;i<n;i++){
			c=a;    //1  2  3  5
			a=a+b;  //2  3  5  8
			b=c;    //1  2  3  5
			//i   
			//sum 
			sum+=1.0*a/b;
		}
		printf("   %f\n",sum);
	}


	return 0;
}

