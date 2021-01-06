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
	
	printf("\n>>>원하는 메뉴를 선택하세요: ");
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
	printf("==========< 메뉴 >==========\n");
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("4. 나눗셈\n"); 
}

void add(){
	double num1, num2, result;
	 
	printf("두 개의 숫자를 입력하세요: ");
	scanf("%lf %lf", &num1, &num2);
	
	result = num1 + num2;
	
	printf("결과값은 %lf입니다", result);
}

void sub(){
	double num1, num2, result;
	 
	printf("두 개의 숫자를 입력하세요: ");
	scanf("%lf %lf", &num1, &num2);
	
	result = num1 - num2;
	
	printf("결과값은 %lf입니다", result);
}

void gob(){
	double num1, num2, result;
	 
	printf("두 개의 숫자를 입력하세요: ");
	scanf("%lf %lf", &num1, &num2);
	
	result = num1 * num2;
	
	printf("결과값은 %lf입니다", result);
}

void div(){
	double num1, num2, result;
	 
	printf("두 개의 숫자를 입력하세요: ");
	scanf("%lf %lf", &num1, &num2);
	
	result = num1 / num2;
	
	printf("결과값은 %lf입니다", result);
}  
