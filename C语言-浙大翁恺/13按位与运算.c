#include <stdio.h>
#include <stdlib.h>

/*ע��*/
int main(int argc, char *argv[]) {
	int a=0x0005,b=15,c;
	//0000 0101;0001 0000 
	c=(a&b);
	printf("%d\n",c);
	
	//�������stdlib.h������
	int m=0xA5;//16
    char str[30];
    itoa(m,str,2);  //2���Ǵ���ת��Ϊ2����
    printf("%s\n",str);//�ַ���
    itoa(m<<2,str,2);
    printf("%s",str);
	return 0;
}




