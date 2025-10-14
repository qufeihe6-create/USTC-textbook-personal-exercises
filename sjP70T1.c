#include<stdio.h>
int main(){
	double a,b;
	printf("ÊäÈë");
	scanf("%lf%lf",&a,&b);
	if(a>=(double)(-2)&&a<=(double)2){
		if(b>=(double)(-2)&&b<=(double)2)
		    printf("Yes");
		else
		    printf("No");
		}
	else
	    printf("No");
	    return 0;
	
}
