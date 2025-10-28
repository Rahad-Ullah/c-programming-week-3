#include <stdio.h>
#include <string.h>
int main()
{
    static char str[10000001];
    scanf("%s", str);

    int arr[123] = {0};

    for (int i = 0; i < strlen(str); i++)
    {
        arr[(unsigned char)str[i]]++;
    }

    for (int i = 'a'; i <= 'z'; i++)
    {
        if (arr[i] > 0)
        {
            printf("%c : %d\n", i, arr[i]);
        }
    }

    return 0;
}