#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char str1[51], str2[51];
        scanf("%s %s", str1, str2);

        int len1 = strlen(str1);
        int len2 = strlen(str2);
        int maxLen = len1 > len2 ? len1 : len2;

        for (int i = 0; i < maxLen; i++)
        {
            if (i < len1)
                printf("%c", str1[i]);
            if (i < len2)
                printf("%c", str2[i]);
        }

        printf("\n");
    }

    return 0;
}