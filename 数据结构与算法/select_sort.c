#include <stdio.h>

void swap(int *a,int *b) { //���Q�ɂ�׃��
	int temp = *a;
	*a = *b;
	*b = temp;
}
void select_sort(int arr[], int len) {
	int i,j;

	for (i = 0 ; i < len - 1 ; i++) {
		int min = i;
		for (j = i + 1; j < len; j++)     //���Lδ�����Ԫ��
			if (arr[j] < arr[min])    //�ҵ�Ŀǰ��Сֵ
				min = j;    //�o���Сֵ
		swap(&arr[min], &arr[i]);    //�����Q
	}
}
/****************************************************************/
int main(void) {
	int a[]={7,8,16,3,5,32,51,25,5,4,9,13,59,2,8,6,};
	int len=sizeof(a)/sizeof(a[0]);

	select_sort(a,len);

    for(int i=0;i<len;i++){
		printf("%d\t",a[i]);
	}

	return 0;
}

