#include <stdio.h>

/* �迭 �������� ���� */ 
int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int temp;
	int size;
	
	size = sizeof(arr) / sizeof(arr[0]);
	
	for(int i = 0; i < size - 1; i++)
	{
		for(int j = 0; j < size - 1; j++)
		{
			if(arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

/* �迭 �ȿ��� ������ �� ���� ���� 
int main(void)
{
	int arr[] = {2, 8, 15, 1, 8, 10, 5, 19, 19, 3, 5, 6, 6, 2, 8, 2, 12, 16, 3, 8, 17,
				12, 5, 3, 14, 13, 3, 2, 17, 19, 16, 8, 7, 12, 19, 10, 13, 8, 20,
				16, 15, 4, 12, 3, 14, 14, 5, 2, 12, 14, 9, 8, 5, 3, 18, 18, 20, 4};
	int count[20] = {0};
	
	int size;
	size = sizeof(arr) / sizeof(arr[0]);
	
	for(int i = 1; i <= 20; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if(arr[j] == i)
				count[i - 1]++;
		}
	}
	
	for(int i = 0; i < 20; i++)
	{
		printf("%d - %d��\n", i + 1, count[i]);
	}
	
	return 0;
}*/
 
/* ���ϴ� ������ ���� ã�� 
int main(void)
{
	int arr[] = {2, 8, 15, 1, 8, 10, 5, 19, 19, 3, 5, 6, 6, 2, 8, 2, 12, 16, 3, 8, 17,
				12, 5, 3, 14, 13, 3, 2, 17, 19, 16, 8, 7, 12, 19, 10, 13, 8, 20,
				16, 15, 4, 12, 3, 14, 14, 5, 2, 12, 14, 9, 8, 5, 3, 18, 18, 20, 4};
	int size, cnt, answer;
	size = sizeof(arr) / sizeof(arr[0]);
	
	printf("ã�⸦ ���ϴ� ���ڸ� �Է��ϼ���(1~20): ");
	scanf("%d", &answer);
	
	for(int i = 0; i < size; i++)
	{
		if(arr[i] == answer)
			cnt++;
	}
	
	printf("���� %d�� �迭�� %d�� �ֽ��ϴ�.", answer, cnt);
	return 0;
}*/
