#include<stdio.h>
int main(){
	long long int x;
	printf("请输入一个数：\n");
	scanf("%lld",&x);
	if(x>=-1000000&&x<=1000000){
	    if(x%3==0&&x%5==0)
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
	else
	    printf("请输入-1,000,000~1,000,000之间的数");
	return 0; 
}
