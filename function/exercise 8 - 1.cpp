#include <stdio.h>

double tax(int a){
	
	double result;
	result = a*0.06;
	return result;
} 

int main(void){
	int a;
	double result;
	
	scanf("%d", &a);

	result = tax(a);
	printf("%lf", result);
	
}
