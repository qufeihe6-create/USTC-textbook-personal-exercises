#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,p,area;
	printf("请输入三角形的3条边：\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b>c&&b+c>a&&a+c>b&&a>0&&b>0&&c>0){
		p=(a+b+c)/2;
		area=sqrt(p*(p-a)*(p-b)*(p-c));
		if(a==b&&b==c)
		    printf("边长为%lf,%lf,%lf的三角形为正三角形，面积是%lf",a,b,c,area);
		else if(a==b||b==c||c==a){
			if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
		        printf("边长为%lf,%lf,%lf的三角形为等腰直角三角形，面积是%lf",a,b,c,area);
			else
			    printf("边长为%lf,%lf,%lf的三角形为等腰三角形，面积是%lf",a,b,c,area);
		}
		else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
		    printf("边长为%lf,%lf,%lf的三角形为直角三角形，面积是%lf",a,b,c,area);
		else
		    printf("边长为%lf,%lf,%lf的三角形为一般三角形，面积是%lf",a,b,c,area);
		   	}
	else
	    printf("Error");
	return 0;
	
}
