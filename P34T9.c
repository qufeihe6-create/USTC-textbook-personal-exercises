// ���� ���ֵ����Сֵ��Ϊ�����е�һ��Ԫ��
// ���ν������еĵ�1��2��3��4��5��Ԫ�������ֵ����Сֵ�Ƚ�
// if data i>max �� max=data i
// ����ѭ��5�Σ�max��Ϊ���Ԫ��
// printf(max)
// ��Сֵͬ�� 
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
	printf("���ֵΪ%d\n",max);
	printf("��СֵΪ%d\n",min);
	return 0;
	
}
