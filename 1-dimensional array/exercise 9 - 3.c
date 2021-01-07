#include <stdio.h>

/* 단어 뒤집기 */ 
int main(void)
{
	char word[50];
	int cnt = 0;
	
	printf("단어를 입력하세요: ");
	scanf("%s", word);
	
	for(int i = 0; word[i] != '\0'; i++)
	{
		cnt++;
	}
	
	printf("단어를 뒤집으면: ");
	for(int i = cnt - 1; i >= 0; i--)
	{
		printf("%c", word[i]);
	}
} 

/* 단어의 개수 세기 
int main(void)
{
	char word[50];
	int cnt = 0;
	
	printf("단어를 입력하세요: ");
	scanf("%s", word);
	
	for(int i = 0; word[i] != '\0'; i++)
	{
		cnt++;
	}
	
	printf("%s의 단어의 길이는 %d자입니다.", word, cnt); 
}*/ 
