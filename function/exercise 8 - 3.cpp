#include <stdio.h>

/* 1. ���밪 ����� 
double user_abs(double num);

int main(void)
{
	double result, num;
	
	printf("���� �ϳ��� �Է��ϼ���: ");
	scanf("%lf", &num);
	
	result = user_abs(num);
	
	printf("���밪�� %1lf�Դϴ�.\n", result);
	return 0;
 }
 
double user_abs(double num)
{
	double result;
	
	if(num < 0){
		result = num * (-1);
	}
	else
		result = num;
	
	return result;
}*/

/* 2. �ŵ����� ���ϱ� �Լ� 
double user_pow(double, int);

int main(void)
{
	double result, bottom;
	int factor;
	
	printf("�ؼ��� �Է��ϼ���: ");
	scanf("%lf", &bottom);
	printf("������ �Է��ϼ���: ");
	scanf("%d", &factor);
	
	result = user_pow(bottom, factor);
	
	printf("�ŵ������� %lf�Դϴ�.", result);
	return 0; 
}

double user_pow(double bottom, int factor)
{
	double result = 1;
	
	for(int i = 0; i < factor; i++)
	{
		result *= bottom;
	}
	
	return result;
}
*/

/* 1, 2 �̿��ؼ� ���� ����ϱ� */
double user_abs(double);
double user_pow(double, int);

int main(void)
{
	double x, result, calculation;
	
	printf("x�� ���� �Է��ϼ���: ");
	scanf("%lf", &x);
	
	calculation = 2 * user_pow(x, 3) + 3 * user_pow(x, 2) + 4;
	result = user_abs(calculation);
	
	printf("������� %lf�Դϴ�", result); 
}

double user_abs(double x)
{
	double result;
	
	if(x < 0){
		result = x * (-1);
	}
	else
		result = x;
	
	return result;
}

double user_pow(double bottom, int factor)
{
	double result = 1;
	
	for(int i = 0; i < factor; i++)
	{
		result *= bottom;
	}
	
	return result;
}


