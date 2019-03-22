#include <stdio.h>

int main () {
	int  var = 20;   /* 实际变量声明 */
	int  *ip;        /* 指针变量声明 */
	printf("%d\n\n",var);

	scanf( "%d", &var);  
	printf("var=%d &var=%p ip=%p \n",var,&var,ip);
	printf("++ip=%p\n\n",++ip);
						//&获得所对应指针的地址 
	ip = &var;          //  ip = &var= *&ip= &*ip; ip,&var都是指针                                                            /* 在指针变量中存储 var 的地址 */
	scanf( "%d" , ip);  //  *ip=*(&var)=var	//55
	printf("var=%d  ip=%d  *ip=%d\n",var,ip,*ip);	//55
	printf("&var=%p  ip=%p\n",&var,ip);		//0x00000
	printf("*(&var)=%d  ,*&var=%d\n" ,*(&var),*&var );	//55
	printf("&(*ip)=%p ,&*ip=%p\n",&(*ip),&*ip );		//0x00000
	printf("&ip=%p *&ip=%p\n", &ip,*&ip );
	
	return 0;
}

//printf("Address of var variable: %p\n", &var  );
/* 在指针变量中存储的地址 */
//printf("Address stored in ip variable: %p\n", ip );
//printf("Address stored in &ip variable: %p\n", &ip );
/* 使用指针访问值 */



