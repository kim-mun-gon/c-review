#include <stdio.h>

/* �޴� ����ϴ� �Լ� ����� 
void menu_disp();

int main(void)
{
	menu_disp();
	printf(">>>���ϴ� �޴��� �����ϼ���: "); 
}

void menu_disp(){
	printf("==========< �޴� >==========\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n"); 
}
*/

/* �Ű����� ���� ������ �Լ� 
double div();

int main(void)
{
	double res;
	res = div();
	
	printf("������ �����: %lf", res);
	return 0;
} 

double div()
{
	double num1, num2, result;
	
	printf("�ΰ��� ���ڸ� �Է��ϼ���: ");
	scanf("%lf %lf", &num1, &num2);
	
	result = num1 / num2;
	
	return result;
}
*/

/* ���� �ϳ��� �������ڷ� �޾Ƽ� ȭ�鿡 ����ϴ� �Լ� */ 
void res_disp(double);

int main(void)
{
	res_disp(3.4);
	return 0;
}

void res_disp(double num)
{
	printf("������� %lf�Դϴ�.", num);
} 
