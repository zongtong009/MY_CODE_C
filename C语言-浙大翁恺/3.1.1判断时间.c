#include<stdio.h>

int main() {
	int hour1,minute1;
	int hour2,minute2;
	int h,min,sum;
	//输入两次时间 
	printf("请输入初始时间h和min，\n以空格分割:");
	scanf("%d %d",&hour1,&minute1);
	printf("请输入结束时间h和min，\n以空格分割:");
	scanf("%d %d",&hour2,&minute2);
	//转化计算 
	sum=hour2*60+minute2-hour1*60-minute1;
	h=sum/60;
	min=sum%60;
	
	printf("时间间隔%d小时,%d分钟\n",h,min);
	//借位计算 
	if (minute2<minute1){
		minute2+=60;
		hour2-=1;
	}
	printf("时间间隔%d小时,%d分钟",hour2-hour1,minute2-minute1);
	
	
	
	return 0;
}



