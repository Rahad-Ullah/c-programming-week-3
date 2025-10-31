#include <stdio.h>
#include <string.h>
int main()
{
    char str[100001];
    scanf("%s", str);
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", str[i] - ' ');
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", str[i] + ' ');
        }
        else if (str[i] == ',')
        {
            printf("%c", ' ');
        }
    }

    return 0;
}