#include <stdio.h>

/* �ܾ� ������ */ 
int main(void)
{
	char word[50];
	int cnt = 0;
	
	printf("�ܾ �Է��ϼ���: ");
	scanf("%s", word);
	
	for(int i = 0; word[i] != '\0'; i++)
	{
		cnt++;
	}
	
	printf("�ܾ ��������: ");
	for(int i = cnt - 1; i >= 0; i--)
	{
		printf("%c", word[i]);
	}
} 

/* �ܾ��� ���� ���� 
int main(void)
{
	char word[50];
	int cnt = 0;
	
	printf("�ܾ �Է��ϼ���: ");
	scanf("%s", word);
	
	for(int i = 0; word[i] != '\0'; i++)
	{
		cnt++;
	}
	
	printf("%s�� �ܾ��� ���̴� %d���Դϴ�.", word, cnt); 
}*/ 
