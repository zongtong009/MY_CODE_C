#include <stdio.h> 
#include <stdlib.h>
#include "array.h"
//typedef struct {
//    int *array;
//    int size;
//}Array;

Array array_creat (int init_size){
    Array a;
    a.size=init_size;
    a.array=(int*)malloc(sizeof(int)*a.size);
    return a;
}
void array_free(Array *a){
    free(a->array);
    a->array=NULL;
    a->size=0;
}
//·â×°
int array_size(const Array *a){
    return a->size;
}
//·µ»ØÖ¸Õë
int* array_at(const Array *a,int index){
    return &(a->array[index]);
}
int array_get(Array *a,int index ){
	return a->array[index];
}
void array_set(Array *a,int index ,int value){
	a->array[index]=value;
}
void array_inflate(Array *a,int more_size){
	int *p =(int*) malloc(sizeof(int)  (a->size+more_size));
	for(int i=0;i<a->size;i++){
		p[i]=a->array[i];
	}
	free(a->array);
	a->array=p;
	a->size+=more_size;
}
	

int main(){
    Array a=array_creat(100);
    printf("%d\n",array_size(&a));
    *array_at(&a,0)=10;
	printf("%d\n",*array_at(&a,0));
	int number,cnt=0;
	while(1){
		scanf("%d",&number);
		*array_at(&a,cnt++)=number;
	}
	
    array_free(&a);
}
