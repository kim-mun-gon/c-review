#include <stdio.h>

int main(void)
{
	int ages[5];
	int tot = 0;
	double avg; 
	int i;
	
	printf("�ټ� ���� ���̸� �Է��ϼ���: ");
	
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &ages[i]);
		tot += ages[i];
	}
	
	avg = tot / 5.0;
	
	printf("�Էµ� �ټ� ���� ����: ");
	
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", ages[i]);
	}
	
	printf("\n�ټ� ���� ��� ���̴� %.1lf�Դϴ�.\n", avg);
	return 0;
}
