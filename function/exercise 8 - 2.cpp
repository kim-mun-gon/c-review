#include <stdio.h>

/*두 숫자의 곱 함수 
double num_gob(double a, double b)
{
	double gob;
	
	gob = a * b;
	return gob;
}

int main(void)
{
	double a, b, gob;
	
	printf("두 개의 숫자를 입력하세요: ");
	scanf("%lf %lf", &a, &b);
	
	gob = num_gob(a, b);
	
	printf("두 수의 곱은: %.1lf", gob); 
	return 0;
}*/

/*원의 면적 구하기 함수*/

double circle_area(double radious)
{
	double area;
	
	area = radious * radious * 3.14;
	return area;
}

int main(void)
{
	double radious, area;
	
	printf("반지름을 입력하세요: ");
	scanf("%lf", &radious);
	
	area = circle_area(radious);
	
	printf("면적은: %.3lf\n", area);
	return 0; 
 } 
