#include <stdio.h>
#include <string.h>
#define MAX 128
int main()
{
    char a[MAX] = "I am from COEP";
    int i, j, k;
    printf("%s\n", a);
    int len = strlen(a);
    char tmp;
    for(i = 0, j = len - 1; i < (len / 2); i++, j--)
    {
        tmp = a[i];
        a[i] =  a[j];
        a[j] = tmp; 
    }
    int count = 0;
    int int_temp;
    for(i = 0; i < len; i++)
    {
        count++;
        if(a[i] == ' ')
        {
            for(j = 0, k = count; j < (count / 2); j++, k--)
            {
                tmp = a[j];
                a[j] = a[k];
                a[k] = tmp;
            }
            count = 0;
        }
        printf("%d  ", i);
    }
    printf("\n%s\n", a);
    return 0;
}
