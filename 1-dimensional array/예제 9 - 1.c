#include <stdio.h>

int main(void)
{
	int ages[5];
	int tot = 0;
	double avg; 
	int i;
	
	printf("다섯 명의 나이를 입력하세요: ");
	
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &ages[i]);
		tot += ages[i];
	}
	
	avg = tot / 5.0;
	
	printf("입력된 다섯 명의 나이: ");
	
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", ages[i]);
	}
	
	printf("\n다섯 명의 평균 나이는 %.1lf입니다.\n", avg);
	return 0;
}
