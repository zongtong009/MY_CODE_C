#include <stdio.h>
#include <stdlib.h>
void insert_sort1(int a[], int n) {
	int i, j, k;
	for (i = 1; i < n; i++) {
		//Ϊa[i] ��ǰ���a[0...i-1]������������һ�����ʵ�λ��
		for (j = i - 1; j >= 0; j--) {
			if (a[j] < a[i])
				break;
		}
		//���ҵ���һ�����ʵ�λ��
		if (j != i - 1) {//����a[i] ������������
			int temp = a[i];
			for (k = i - 1; k > j; k--) {
				a[k + 1] = a[k];
			}	
			a[k + 1] = temp;//��a[i]�ŵ���ȷλ����
		}
	}
}

/****************************************************************/
int main(int argc, char *argv[]) {
	/**/int a[]= {7,8,16,3,5,32,51,25,5,4,9,13,59,2,8,6,};
	int N=sizeof(a)/sizeof(a[0]);
	insert_sort1(a,N);
	for(int i=0; i<N; i++) {
		printf("%d\t",a[i]);
	}


	return 0;
}

