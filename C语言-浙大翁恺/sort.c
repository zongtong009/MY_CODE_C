#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b);
void sort(int a[],int len);
/*×¢ÊÍ*/
int main(int argc, char *argv[]) {
	int a[]={13,56,21,11,6,55,32,24,21,13,36,44,15,};
	       // 13   21 11 6    32 24 21 13         15
	int len=sizeof(a)/sizeof(a[0]);
	sort(a,len);   //ÅÅÐòsort 
		
	for(int i=0;i<len;i++){  //Êä³öa[] 
		printf("%d\t",a[i]);
		if((i+1) %5==0 ){  
			printf("\n");
		}		
	}
	return 0;
} 
void swap(int *a,int *b){//***½»»»
	int t;
	t=*a;
	*a=*b;
	*b=t;	
}
//**********ÅÅÐòsort*********************** 
void sort(int a[],int len){
	while(len>0) {    //13,12,11,10,...2              
		for(int i=0;i<len-1;i++){  //0-12>>0 - 11>> ...0-1
			if(a[i]>a[i+1]){
				swap(&a[i],&a[i+1]);
			}
		}
		len--;
	}
		
}




