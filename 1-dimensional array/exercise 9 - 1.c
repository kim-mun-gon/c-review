#include <stdio.h>

int main(void)
{
	double nums[5];
	double max;
	
	printf("다섯 개의 숫자를 입력하세요: ");
	
	for(int i = 0; i < 5; i++)
	{
		scanf("%lf", &nums[i]);
	}
	max = nums[0];
	for(int i = 1; i < 5; i++)
	{
		if(max < nums[i])
			max = nums[i];
	}
	
	printf("가장 큰 값은: %lf입니다.", max);
}
