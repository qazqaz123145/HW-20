#include<stdio.h>
#include<stdlib.h>

struct Phone{
	
	char *phone_brand;
	char *phone_model;
	char *phone_yearofmanufacture;
	int   phone_price;
	char *use_name;
	char *use_cellphone;
	
}phone[2]; 
int main(void){
	int B=0;
	struct Phone phone[5]={"iphone","6s","2015/3/20",24000,"a","0952589503",
	                     "iphone","7","2019/5/3",15900,"b","0916855800",
						 "iphone","8","2017/2/24",21500,"c","0922738558",
						 "iphone","8 plus","2019/3/8",22500,"d","0975187483",
						 "iphone","xr","2019/7/12",18900,"e","0282625396"};
	for(B=0;B<5;B++){
		printf("%s�����----------\n",phone[B].use_name);
		printf("����~�P:");
		puts(phone[B].phone_brand);
		printf("�������:");
		puts(phone[B].phone_model);
		printf("����X�t���:");
		puts(phone[B].phone_yearofmanufacture);
		printf("�������:");
		printf("%d\n",phone[B].phone_price);
		printf("�ϥΪ�:");
		puts(phone[B].use_name);
		printf("������X:");
		puts(phone[B].use_cellphone);
		printf("----------------\n\n");
	}                    
	
	system("pause");
	return 0;
	
}
