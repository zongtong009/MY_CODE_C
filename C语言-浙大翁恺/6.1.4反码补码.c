#include <stdio.h>
#include <stdlib.h>

/*ע��*/
int main(int argc, char *argv[]) {
	char c=255;  //1111 1111 ,�Բ������-1    
	//(+1) -128 >> 127>128    sizeof(char)=1 
	int a=255;   //(0000 0000,)*3,1111 1111 ����0��0��0��255  sizeof(int)=4
	printf("c=%d, a=%d\n",c,a);
	
	//unsigned  ��ʾ���Բ����ȡ 
	
	unsigned char c1=255;    //(+1)0 >> 255 > 0 >>>255... ֻ�ܱ������  
	int a1=255;                      
	printf("c1=%d, a1=%d\n",c1,a1);
	
	//(+1) -128 >>> 0 >>> 127 >-128  >>> 0 ...
	char c2=127, c3=c2+1,c4=-128;
	printf("c2=%d c2+1=%d c3=%d \n",c2,c2+1,c3);  //c2+1��Ӱ��c2��ֵ 
	printf("++c2=%d\n",++c2);         
	printf("--c4=%d c4=%d",--c4,c4);  //�����������㣬����c4,����--c4
	 
	
	return 0;	
}

