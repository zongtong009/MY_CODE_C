#include <stdio.h>
/* 给一个数组或几个数,确定这其中的数是否都互不相等

    都不相等输出0;有相等则输出1
	1.先将几个数转成数组
	2.确定数组元素数
*/
/*  ###假定数组Array[]有几千个数     ###*/
int judge_equal(int s[]){
//int judge_equal(int s[],int num){
 	int num = sizeof(s[])/sizeof(s[0]);
	int result = 0;
	// TODO
	for(i=0;i<num;i++){
		m = s[i];
		if (){
			result = 1;
		}
	}
	
	return result;
}

