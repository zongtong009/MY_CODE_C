#include <stdio.h>

/****************************************************************/
int main(void) {
	int array[2][3]={0};
	printf("%x\n",&array);
	printf("%x\n",array);
	printf("%x\n",&array+1); //�����Ժ�ĵ�ַ���Ѿ�������array��ռ��ַ
	printf("%x\n",(&(array)+1)); //==����ģ������ԣ������ȼ���
	printf("%x\n\n",array+1); //����ָ��һ����С��ַ
	
	printf("%x\n",&array[0]);
	printf("%x\n",array[0]);
	printf("%x\n",&array[0]+1); //������array[0]��ռ��ַ
	printf("%x\n",array[0]+1);
	printf("%x\n\n\n",array[1]);
	
	return 0;
}

