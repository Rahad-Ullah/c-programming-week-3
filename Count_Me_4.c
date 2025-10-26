#include <stdio.h>
#include <string.h>
int main()
{
    char str[10001];
    scanf("%s", str);

    int counterArr[123] = {0};

    for (int i = 0; i < strlen(str); i++)
    {
        counterArr[(unsigned char)str[i]]++;
    }

    for (int i = 'a'; i <= 'z'; i++)
    {
        if (counterArr[i] > 0)
        {
            printf("%c - %d\n", i, counterArr[i]);
        }
    }

    return 0;
}