#include <stdio.h>
typedef enum {
    true=1, false=0
} bool;
//����n!,n��ֵ��main�ж���
int main(void) {
	int n = 10;    //���������
	int sum = 1;   //������ŵ��˵Ľ��
	bool flag = false;    //���˱��

	int num = n;    //ѭ������
	while( !flag ) {
		sum = sum * (num--);//��num=1ʱ����ѭ��
		printf ("���˵�%d�ĵ���ֵΪ %d \n", num+1, sum);
		if( num == 0) {
			flag = true;
		}
	}
	printf ("%d�ĵ���ֵΪ %d \n", n, sum);

	return 0;
}

