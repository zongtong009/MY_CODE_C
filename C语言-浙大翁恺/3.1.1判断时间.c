#include<stdio.h>

int main() {
	int hour1,minute1;
	int hour2,minute2;
	int h,min,sum;
	//��������ʱ�� 
	printf("�������ʼʱ��h��min��\n�Կո�ָ�:");
	scanf("%d %d",&hour1,&minute1);
	printf("���������ʱ��h��min��\n�Կո�ָ�:");
	scanf("%d %d",&hour2,&minute2);
	//ת������ 
	sum=hour2*60+minute2-hour1*60-minute1;
	h=sum/60;
	min=sum%60;
	
	printf("ʱ����%dСʱ,%d����\n",h,min);
	//��λ���� 
	if (minute2<minute1){
		minute2+=60;
		hour2-=1;
	}
	printf("ʱ����%dСʱ,%d����",hour2-hour1,minute2-minute1);
	
	
	
	return 0;
}



