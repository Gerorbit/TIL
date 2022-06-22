#include <stdio.h>

void find_num(int a[], int n,int *first, int *second);

int main(void){
	int first, second;
	int a[6] = {1,3,8,11,18,21};
	find_num(a,sizeof(a)/sizeof(a[0]),&first,&second);
	
	printf("가장 큰 값은 : %d\n", first);
	printf("두번째로 큰 값은 : %d\n", second);
	
	return 0;
} 

void find_num(int* a[], int n,int *first, int *second){
	int i;
	*first = a[0];
	*second = a[0];
	for(i=1;i<n;i++){
		if(*first<a[i]){
			*first = a[i];
		}
	}
	for(i=1;i<n;i++){
		if(a[i]<*first){
			if(*second<a[i]){
				*second = a[i];
			}
		}
	}
	
}
