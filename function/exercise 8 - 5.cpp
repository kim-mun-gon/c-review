#include <stdio.h>

void sel_menu();
void add();
void sub();
void gob();
void div();

int main(void)
{
	int index;
	
	sel_menu();
	
	printf("\n>>>���ϴ� �޴��� �����ϼ���: ");
	scanf("%d", &index);
	
	if(index == 1)
	{
		add();
	}
	else if(index == 2)
	{
		sub();
	}
	else if(index == 3)
	{
		gob();
	}
	else if(index == 4)
	{
		div();
	} 
}

void sel_menu(){
	printf("==========< �޴� >==========\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n"); 
}

void add(){
	double num1, num2, result;
	 
	printf("�� ���� ���ڸ� �Է��ϼ���: ");
	scanf("%lf %lf", &num1, &num2);
	
	result = num1 + num2;
	
	printf("������� %lf�Դϴ�", result);
}

void sub(){
	double num1, num2, result;
	 
	printf("�� ���� ���ڸ� �Է��ϼ���: ");
	scanf("%lf %lf", &num1, &num2);
	
	result = num1 - num2;
	
	printf("������� %lf�Դϴ�", result);
}

void gob(){
	double num1, num2, result;
	 
	printf("�� ���� ���ڸ� �Է��ϼ���: ");
	scanf("%lf %lf", &num1, &num2);
	
	result = num1 * num2;
	
	printf("������� %lf�Դϴ�", result);
}

void div(){
	double num1, num2, result;
	 
	printf("�� ���� ���ڸ� �Է��ϼ���: ");
	scanf("%lf %lf", &num1, &num2);
	
	result = num1 / num2;
	
	printf("������� %lf�Դϴ�", result);
}  
