#include<stdio.h>
int main(){
	char ctrl;
	float h_area=0,h_price=0,h_cash=0,h_rate=0,h_year=0;
	unsigned int loan_month;
	float loan_sum,loan_mon_rate;
	float mon_pay,pay_sum=0;
	int h_type=1;
	float t;
	int i;
	for(;;){
		printf("\ns-��������\ne-�˳�����\n");
		ctrl=getchar();
		if(ctrl=='s')
		{
			printf("��1�����빺�����\n");
			scanf("%f",&h_area);
			printf("��2�����빺������\n");
			scanf("%f",&h_price);
			printf("��3�����빺���׸�����(x)%%\n");
			scanf("%f",&h_cash);
			printf("��4�������������(x)%%\n");
			scanf("%f",&h_rate);
			printf("��5�������������\n");
			scanf("%f",&h_year);
			printf("��6���������ҷ�ʽ��0-�ȶϢ��1-�ȶ��\n");
			scanf("%d",&h_type);
			loan_mon_rate=h_rate/100./12;
			loan_month=h_year*12;
			loan_sum=h_area*h_price*((float)1-0.01*h_cash);
			printf("�����ܶ�Ϊ��%.2f\n",loan_sum); 
			pay_sum=0.0;
			if(h_type==0){
				t=1.0;
				for(i=0;i<loan_month;i++)
				t*=(1+loan_mon_rate);
				mon_pay=loan_sum*loan_mon_rate*t/(t-1);
				pay_sum=mon_pay*loan_month;
				printf("�ȶϢ���ҷ�ʽÿ�»�����Ϊ����%.2f\n",mon_pay);
				printf("�ȶϢ���ҷ�ʽ�ܻ�����Ϊ����%.2f\n",pay_sum);
			}
			else if(h_type==1){
				printf("�ȶ�𰴽ҷ�ʽÿ�»������б�\n");
				for(i=0;i<loan_month;i++){
					mon_pay=loan_sum/(float)loan_month+(loan_sum-pay_sum)*loan_mon_rate;
					pay_sum+=mon_pay;
					printf("��%d���»����%.2f\n",i+1,mon_pay);
				}
				printf("�ȶ�𰴽ҷ�ʽ�ܻ�����Ϊ��%.2f\n",pay_sum);
			}
		}
		else if(ctrl=="e")
	    break;
		}
			
			
		return 0;
		}
