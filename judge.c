#include <stdio.h>

int main(){
	int x;
	const int m=1;
    for (x=1;x<4;++x){
    	
        if (1 == (x != 1) + (x == 4) + (x == 2) + (x != 4)){
            printf("%d\n",x);
            printf("%d",x+m);
            
        }
    }
    
	return 0;    
}
 

	
