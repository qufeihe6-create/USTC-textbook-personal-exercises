#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int i=1,m=1,q=1,s1=0,s2=0;//����ֻ��1��ѭ����ʶ��i����Ϊÿһ��ѭ����Ҫһ����ͬ�ı�ʶ�� 
	double n;//��Ϊ���ֱ�Ӷ���Ϊint�Ļ���ֱ�ӽ���int���жϲ������ǲ���������С���� 
	double s3=0;
	printf("������һ��n:\n");
	scanf("%lf",&n);
	if(n>0&&(long long int)n==n){
	for(i=1;i<=n;i++){
		s1=s1+i;
		}
	while(m<=n){
    	s2=s2+2*m-1;m++;}
	do{
	    if(q%2==0){//C��û��ָ������˵����Ǽӻ��Ǽ���Ҫ����ż�������� 
	        s3=s3-1.0/q;//������ĳ�1.0/q���ͻ���1/q����������������q����1��ʱ��Ͷ���0�� 
	        q++;}
	    else{
	        s3=s3+1.0/q;
			q++;}}while(q<=n);
	printf("s1=%lld,s2=%lld,s3=%lf",s1,s2,s3);
	}
	else{
	    printf("error");
	    exit(1);}//AI��������������˳�������Ҫ��includeһ��ͷ�ļ� ����Ҳ��֪����ʲô�� 
	return 0;
	}
