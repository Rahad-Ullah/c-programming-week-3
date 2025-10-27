#include <stdio.h>
int main()
{
    char str1[21];
    char str2[21];
    scanf("%s %s", &str1, &str2);

    for (int i = 0; i <= 21; i++)
    {
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            printf("%s", str1);
            break;
        }
        else if (str1[i] == '\0')
        {
            printf("%s", str1);
            break;
        }
        else if (str2[i] == '\0')
        {
            printf("%s", str2);
            break;
        }
        else if (str2[i] == str1[i])
        {
            continue;
        }
        else if (str2[i] > str1[i])
        {
            printf("%s", str1);
            break;
        }
        else if (str2[i] < str1[i])
        {
            printf("%s", str2);
            break;
        }
    }

    return 0;
}