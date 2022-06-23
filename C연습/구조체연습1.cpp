#include <stdio.h>

struct sum_save{
	int expo2;   //제곱
	int expo3;   //세제곱
	int sum;
};

int main(void){
	struct sum_save list[10];
	int i;
	for(i=1;i<=10;i++){
		list[i-1].expo2 = i*i;
		list[i-1].expo3 = i*i*i;
		list[i-1].sum = list[i-1].expo2 + list[i-1].expo3;
	}
	
	for(i=0;i<10;i++){
		printf("%4d + %4d = %4d\n",list[i].expo2,list[i].expo3,list[i].sum);
	}
	
	
	return 0;
}
