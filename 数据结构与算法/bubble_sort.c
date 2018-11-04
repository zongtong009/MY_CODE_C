#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b){//½»»»º¯Êý 
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void bubble_sort(int array[],int len){ //Ã°ÅÝÅÅÐò 
	for(int i=0;i<len-1;i++){
		for(int j=0;j<len-i-1;j++){
			if(array[j]>array[j+1]){
				swap(&array[j],&array[j+1]);			
			}
		}
	}
}
int main(int argc, char *argv[]) {
//******************************
	int a[]={7,8,16,3,5,32,51,25,5,4,9,13,59,2,8,6,};
	int len=sizeof(a)/sizeof(a[0]);
	 
	bubble_sort(a,len);
	
    for(int i=0;i<len;i++){
		printf("%d\t",a[i]);
	}


	return 0;
}

