#include <stdio.h>
#include <string.h>
#define MAX 128
int main()
{
	char a[MAX] = "imagination";
	int len = strlen(a);
	int i, j, count = 0;
	char ch = 'i';
	printf("%s\n", a);
	for(i = (len - 1); i >= 0; i--)
	{
		if(a[i] == ch)
		{
			printf("Count: %d\n", count);
			for(j = (len - count - 1); j < len, a[j] != '\0'; j++)
			{
				printf("a[%d] %c <- a[%d] %c\n", j, a[j], j + 1, a[j + 1]);
				a[j] = a[j + 1];
			}
//			len--;
			a[j + 1] = '\0';
			
		}
		count++;

	}
	printf("\n");
	printf("%s\n", a);
	return 0;
}
