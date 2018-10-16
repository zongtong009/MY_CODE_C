#include<stdio.h>

int main(){
    int a=1,b=0;
    int i;
    
    for(i=1;i<10;i++){
        a*=2;
        b+=a;
    }
    printf("%d",a+b);
    
    return 0;
}
