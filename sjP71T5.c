#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,p,area;
	printf("�����������ε�3���ߣ�\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b>c&&b+c>a&&a+c>b&&a>0&&b>0&&c>0){
		p=(a+b+c)/2;
		area=sqrt(p*(p-a)*(p-b)*(p-c));
		if(a==b&&b==c)
		    printf("�߳�Ϊ%lf,%lf,%lf��������Ϊ�������Σ������%lf",a,b,c,area);
		else if(a==b||b==c||c==a){
			if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
		        printf("�߳�Ϊ%lf,%lf,%lf��������Ϊ����ֱ�������Σ������%lf",a,b,c,area);
			else
			    printf("�߳�Ϊ%lf,%lf,%lf��������Ϊ���������Σ������%lf",a,b,c,area);
		}
		else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
		    printf("�߳�Ϊ%lf,%lf,%lf��������Ϊֱ�������Σ������%lf",a,b,c,area);
		else
		    printf("�߳�Ϊ%lf,%lf,%lf��������Ϊһ�������Σ������%lf",a,b,c,area);
		   	}
	else
	    printf("Error");
	return 0;
	
}
