#include <stdio.h>

/* 1. 절대값 만들기 
double user_abs(double num);

int main(void)
{
	double result, num;
	
	printf("숫자 하나를 입력하세요: ");
	scanf("%lf", &num);
	
	result = user_abs(num);
	
	printf("절대값은 %1lf입니다.\n", result);
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

/* 2. 거듭제곱 구하기 함수 
double user_pow(double, int);

int main(void)
{
	double result, bottom;
	int factor;
	
	printf("밑수를 입력하세요: ");
	scanf("%lf", &bottom);
	printf("지수를 입력하세요: ");
	scanf("%d", &factor);
	
	result = user_pow(bottom, factor);
	
	printf("거듭제곱은 %lf입니다.", result);
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

/* 1, 2 이용해서 수식 계산하기 */
double user_abs(double);
double user_pow(double, int);

int main(void)
{
	double x, result, calculation;
	
	printf("x의 값을 입력하세요: ");
	scanf("%lf", &x);
	
	calculation = 2 * user_pow(x, 3) + 3 * user_pow(x, 2) + 4;
	result = user_abs(calculation);
	
	printf("결과값은 %lf입니다", result); 
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


