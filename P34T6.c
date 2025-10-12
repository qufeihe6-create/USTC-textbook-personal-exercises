#include<stdio.h>
int main()
{
	double a;
	double sum=0; 
	int i;
	for(i=0;i<=4;i++){
	
	    printf("请输入一个正数\n");
	    scanf("%lf",&a);
	        if(a>0){
	            sum=sum+a; }
	        else{
				printf("非法输入\n");
				i--;}}//重新计数。该次循环不算 
    printf("总和为：%lf\n",sum);
   return 0;
}

