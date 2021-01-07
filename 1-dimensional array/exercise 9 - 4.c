#include <stdio.h>

int main(void)
{
	char str1[] = "There is no royal road to learning.";
	char str2[80];
	
	for(int i = 0; str1[i] != '\0'; i++)
	{
		str2[i] = str1[i];
	}
	
	printf("복사된 문자열: ");
	for(int i = 0; str2[i] != '\0'; i++)
	{
		printf("%c", str2[i]);
	}
 } 
