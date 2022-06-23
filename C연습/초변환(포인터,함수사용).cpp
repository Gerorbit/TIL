#include <stdio.h>

void change_time(double time, int *hour,int *min,int *sec){
	*hour = time/(3600);
	*min = (time - (*hour*3600)) / 60;
	*sec = (time - *hour*3600-*min*60);
	
	printf("%.lf초는 %d시간 %d분 %d초 입니다.",time,*hour,*min,*sec);  //함수 안에 포인터와 함수 밖 표현이랑 비교!! 
} 

int main(void){
	double time;
	int hour,min,sec;
	
	printf("변환하려는 초를 입력하세요: \n");
	scanf("%lf", &time);
	
	change_time(time, &hour,&min,&sec);
	printf("%.lf초는 %d시간 %d분 %d초 입니다.",time,hour,min,sec);
	
	return 0;
}


