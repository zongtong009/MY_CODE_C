#include <stdio.h>

int main () {
	int  var = 20;   /* ʵ�ʱ������� */
	int  *ip;        /* ָ��������� */
	printf("%d\n\n",var);

	scanf( "%d", &var);  
	printf("var=%d &var=%p ip=%p \n",var,&var,ip);
	printf("++ip=%p\n\n",++ip);
						//&�������Ӧָ��ĵ�ַ 
	ip = &var;          //  ip = &var= *&ip= &*ip; ip,&var����ָ��                                                            /* ��ָ������д洢 var �ĵ�ַ */
	scanf( "%d" , ip);  //  *ip=*(&var)=var	//55
	printf("var=%d  ip=%d  *ip=%d\n",var,ip,*ip);	//55
	printf("&var=%p  ip=%p\n",&var,ip);		//0x00000
	printf("*(&var)=%d  ,*&var=%d\n" ,*(&var),*&var );	//55
	printf("&(*ip)=%p ,&*ip=%p\n",&(*ip),&*ip );		//0x00000
	printf("&ip=%p *&ip=%p\n", &ip,*&ip );
	
	return 0;
}

//printf("Address of var variable: %p\n", &var  );
/* ��ָ������д洢�ĵ�ַ */
//printf("Address stored in ip variable: %p\n", ip );
//printf("Address stored in &ip variable: %p\n", &ip );
/* ʹ��ָ�����ֵ */



