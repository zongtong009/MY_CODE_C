#include <stdio.h>

int main () {
	int n[ 10 ]; /* n ��һ������ 10 ������������ */

	/* ��ʼ������Ԫ�� */
	for ( int i = 0; i < 10; i++ ) {
		n[ i ] = i + 100; /* ����Ԫ�� i Ϊ i + 100 */
		printf("Array[%d] = %d\n", i, n[ i ] );  // ���������ÿ��Ԫ�ص�ֵ
	}

	return 0;
}
