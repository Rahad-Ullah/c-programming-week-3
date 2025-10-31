#include <stdio.h>
#include <string.h>
int main()
{
    char str1[21];
    char str2[21];
    scanf("%s %s", str1, str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int maxLen = len1 > len2 ? len1 : len2;

    for (int i = 0; i <= maxLen; i++)
    {
        if (str1[i] == '\0')
        {
            printf("%s", str1);
            break;
        }
        else if (str2[i] == '\0')
        {
            printf("%s", str2);
            break;
        }
        else if (str1[i] == str2[i])
        {
            continue;
        }
        else if (str1[i] < str2[i])
        {
            printf("%s", str1);
            break;
        }
        else if (str1[i] > str2[i])
        {
            printf("%s", str2);
            break;
        }
    }

    return 0;
}