#include<stdio.h>
int main(){
	int x;
	double y;
	printf("请输入一个整数：\n");
	scanf("%d",&x);
	switch(x/10){
		case 0:printf("y=%lf",y=x);break;
		case 1:printf("y=%lf",y=x*x+1);break;
		case 2:printf("y=%lf",y=x*x*x+x*x+1);break;
		default:printf("请输入【0，30）内的整数。");break;
	}
	return 0;
	
}
