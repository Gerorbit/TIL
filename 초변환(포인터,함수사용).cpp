#include <stdio.h>

void change_time(double time, int *hour,int *min,int *sec){
	*hour = time/(3600);
	*min = (time - (*hour*3600)) / 60;
	*sec = (time - *hour*3600-*min*60);
	
	printf("%.lf�ʴ� %d�ð� %d�� %d�� �Դϴ�.",time,*hour,*min,*sec);  //�Լ� �ȿ� �����Ϳ� �Լ� �� ǥ���̶� ��!! 
} 

int main(void){
	double time;
	int hour,min,sec;
	
	printf("��ȯ�Ϸ��� �ʸ� �Է��ϼ���: \n");
	scanf("%lf", &time);
	
	change_time(time, &hour,&min,&sec);
	printf("%.lf�ʴ� %d�ð� %d�� %d�� �Դϴ�.",time,hour,min,sec);
	
	return 0;
}


