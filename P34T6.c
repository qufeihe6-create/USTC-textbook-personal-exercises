#include<stdio.h>
int main()
{
	double a;
	double sum=0; 
	int i;
	for(i=0;i<=4;i++){
	
	    printf("������һ������\n");
	    scanf("%lf",&a);
	        if(a>0){
	            sum=sum+a; }
	        else{
				printf("�Ƿ�����\n");
				i--;}}//���¼������ô�ѭ������ 
    printf("�ܺ�Ϊ��%lf\n",sum);
   return 0;
}

