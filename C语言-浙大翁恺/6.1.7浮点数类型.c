#include <stdio.h>
#include <stdlib.h>

/*ע��*/
int main(int argc, char *argv[]) {
	printf("sizeof(float) = %d\n",sizeof(float));
	printf("sizeof(double)= %d\n",sizeof(double));
	/* ��������Χ�� 
	float   7λ��Ч���� 
		���� (1.20*10**(-38) >>> 3.40*10**38 ),
		0,   
		��������� +-(inf),   //12.0/0.0   -12.0/0.0
		nan     //�����ڵĸ�����   0.0/0.0
	double  15λ��Ч���� 
		���� (2.2*10**(-308) >>> 1.79*10**308 ),
		0,   
		��������� +-(inf), 
		nan	    //�����ڵĸ����� 
	*/ 
	printf("123\b\n567\n");
	printf("123\b4\n567\n");
	printf("123\b \n567\n");
	return 0;
}

