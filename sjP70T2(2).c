#include<stdio.h>
int main(){
	float x;
	float y;
	printf("请输入一个实数：\n");
	scanf("%f",&x);
	if(x>=0&&x<10)
		printf("x=%f时，y=%f",x,y=x);
	else if(x>=10&&x<20)
	    printf("x=%f时，y=%f",x,y=x*x+1);
	else if(x>=20&&x<30)
	    printf("x=%f时，y=%f",x,y=x*x*x+x*x+1);
	else
	    printf("请输入【0，30）以内的实数。");
	return 0;	
} 
