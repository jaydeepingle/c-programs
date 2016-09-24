#include <stdio.h>
#define MAX 128
#define CC 26
int ana(char *a, char *b)
{
	int cnt[CC] = {0};			
	int i;
	while(*a)
	{
		cnt[*a - 'a']++;
		a++;
	}
	while(*b)
	{
		cnt[*b - 'a']--;
		b++;
	}
	for(i = 0; i < CC; i++)
	{
		if(cnt[i] != 0)
		{
			printf("Not Anagrams\n");
			return 0;
		}
	}
	printf("Anagrams\n");
	
}
int main()
{
	char a[MAX], b[MAX];
	int i, j;
	printf("String1: ");
	scanf("%s", a);
	printf("String2: ");
	scanf("%s", b);
	int n = ana(a, b);
	return 0;
}
