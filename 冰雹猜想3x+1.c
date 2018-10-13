#include<stdio.h>

int main(){
	int num=2;
	
	//for(num=1;num<10;num++) {
		while(num!=1) {
			if(num%2==0){
				num=num/2;
				printf("%d \n",&num);
			}else {
				num=3*num+1;
				printf("%d \n",&num);
			}
		}



		
	//}

	
	return 0;
}



