#include <stdio.h>

/* 메뉴 출력하는 함수 만들기 
void menu_disp();

int main(void)
{
	menu_disp();
	printf(">>>원하는 메뉴를 선택하세요: "); 
}

void menu_disp(){
	printf("==========< 메뉴 >==========\n");
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("4. 나눗셈\n"); 
}
*/

/* 매개변수 없는 나누기 함수 
double div();

int main(void)
{
	double res;
	res = div();
	
	printf("나눗셈 결과는: %lf", res);
	return 0;
} 

double div()
{
	double num1, num2, result;
	
	printf("두개의 숫자를 입력하세요: ");
	scanf("%lf %lf", &num1, &num2);
	
	result = num1 / num2;
	
	return result;
}
*/

/* 숫자 하나를 전달인자로 받아서 화면에 출력하는 함수 */ 
void res_disp(double);

int main(void)
{
	res_disp(3.4);
	return 0;
}

void res_disp(double num)
{
	printf("결과값은 %lf입니다.", num);
} 
