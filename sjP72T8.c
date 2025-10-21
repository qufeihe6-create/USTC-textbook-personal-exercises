#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int i=1,m=1,q=1,s1=0,s2=0;//不能只设1个循环标识符i，因为每一个循环都要一个不同的标识符 
	double n;//因为如果直接定义为int的话就直接接受int，判断不出来是不是输入了小数等 
	double s3=0;
	printf("请输入一个n:\n");
	scanf("%lf",&n);
	if(n>0&&(long long int)n==n){
	for(i=1;i<=n;i++){
		s1=s1+i;
		}
	while(m<=n){
    	s2=s2+2*m-1;m++;}
	do{
	    if(q%2==0){//C中没有指数，因此到底是加还是减需要分奇偶项来讨论 
	        s3=s3-1.0/q;//如果不改成1.0/q，就会变成1/q，这样是整除，当q大于1的时候就都是0了 
	        q++;}
	    else{
	        s3=s3+1.0/q;
			q++;}}while(q<=n);
	printf("s1=%lld,s2=%lld,s3=%lf",s1,s2,s3);
	}
	else{
	    printf("error");
	    exit(1);}//AI告诉我这个可以退出，但是要多include一个头文件 ，我也不知道有什么用 
	return 0;
	}
