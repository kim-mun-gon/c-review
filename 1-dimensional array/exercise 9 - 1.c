#include <stdio.h>

int main(void)
{
	double nums[5];
	double max;
	
	printf("�ټ� ���� ���ڸ� �Է��ϼ���: ");
	
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
	
	printf("���� ū ����: %lf�Դϴ�.", max);
}
