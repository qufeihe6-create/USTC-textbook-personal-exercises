#include<stdio.h>
int main(){
	long long int x;
	printf("������һ������\n");
	scanf("%lld",&x);
	if(x>=-1000000&&x<=1000000){
	    if(x%3==0&&x%5==0)
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
	else
	    printf("������-1,000,000~1,000,000֮�����");
	return 0; 
}
