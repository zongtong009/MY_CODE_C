#include <stdio.h>

int main () {
	int  var = 20;   /* ʵ�ʱ������� */
	int  *ip,*iq;        /* ָ��������� */
	printf("%d\n\n",var);

	scanf( "%d", &var);
	printf("var=%d &var=%p ip=%p iq=%p\n\n",var,&var,++ip,++iq);

	ip = &var;          //  ip = &var= *&ip= &*ip; ip,&var����ָ��                                                            /* ��ָ������д洢 var �ĵ�ַ */
	scanf( "%d" , ip);  //  *ip=*(&var)=var
	printf("var=%d   *ip=%d\n",var,*ip);
	printf("&var=%p  ip=%p\n",&var,ip);
	printf("*(&var)=%d  ,*&var=%d\n" ,*(&var),*&var );
	printf("&(*ip)=%p ,&*ip=%p\n",&(*ip),&*ip );
	printf("&ip=%p *&ip=%p\n", &ip,*&ip );
	
	return 0;
}

//printf("Address of var variable: %p\n", &var  );
/* ��ָ������д洢�ĵ�ַ */
//printf("Address stored in ip variable: %p\n", ip );
//printf("Address stored in &ip variable: %p\n", &ip );
/* ʹ��ָ�����ֵ */



