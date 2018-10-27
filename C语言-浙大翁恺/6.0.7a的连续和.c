#include <stdio.h>
#include <stdlib.h>

/***********************×¢ÊÍ*****************************/
int main(int argc, char *argv[]) {
	int a,n;   // a[0,9] , n[1,8]
	int sum=0,t=0;
	scanf("%d %d",&a,&n);
/***********************×¢ÊÍ*****************************/
	if(0<=a && a<=9 && 1<=n && n<=8){
		for(int i=0;i<n;i++){
			t=10*t+a;  //
			sum+=t;    //
		}
		printf("%d",sum);	
	}
	
	return 0;
}

