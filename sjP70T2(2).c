#include<stdio.h>
int main(){
	float x;
	float y;
	printf("������һ��ʵ����\n");
	scanf("%f",&x);
	if(x>=0&&x<10)
		printf("x=%fʱ��y=%f",x,y=x);
	else if(x>=10&&x<20)
	    printf("x=%fʱ��y=%f",x,y=x*x+1);
	else if(x>=20&&x<30)
	    printf("x=%fʱ��y=%f",x,y=x*x*x+x*x+1);
	else
	    printf("�����롾0��30�����ڵ�ʵ����");
	return 0;	
} 
