#include<stdio.h>
int main(){
	int x;
	double y;
	printf("������һ��������\n");
	scanf("%d",&x);
	switch(x/10){
		case 0:printf("y=%lf",y=x);break;
		case 1:printf("y=%lf",y=x*x+1);break;
		case 2:printf("y=%lf",y=x*x*x+x*x+1);break;
		default:printf("�����롾0��30���ڵ�������");break;
	}
	return 0;
	
}
