#include <stdio.h>

/*�� ������ �� �Լ� 
double num_gob(double a, double b)
{
	double gob;
	
	gob = a * b;
	return gob;
}

int main(void)
{
	double a, b, gob;
	
	printf("�� ���� ���ڸ� �Է��ϼ���: ");
	scanf("%lf %lf", &a, &b);
	
	gob = num_gob(a, b);
	
	printf("�� ���� ����: %.1lf", gob); 
	return 0;
}*/

/*���� ���� ���ϱ� �Լ�*/

double circle_area(double radious)
{
	double area;
	
	area = radious * radious * 3.14;
	return area;
}

int main(void)
{
	double radious, area;
	
	printf("�������� �Է��ϼ���: ");
	scanf("%lf", &radious);
	
	area = circle_area(radious);
	
	printf("������: %.3lf\n", area);
	return 0; 
 } 
