// 定义 最大值，最小值均为数组中第一个元素
// 依次将数组中的第1，2，3，4，5个元素与最大值与最小值比较
// if data i>max ， max=data i
// 这样循环5次，max即为最大元素
// printf(max)
// 最小值同理 
#include<stdio.h>
int main()
{
	int data[5]={1,2,3,4,5};
	int i;
	int max=data[0];
	int min=data[0];
	for(i=0;i<5;i++){
		if(data[i]>max){
		max=data[i];}
		if(data[i]<min){
		min=data[i];}
	}
	printf("最大值为%d\n",max);
	printf("最小值为%d\n",min);
	return 0;
	
}
