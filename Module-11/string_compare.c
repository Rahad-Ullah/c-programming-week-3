#include <stdio.h>
#include <stdbool.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);

    // lexicographical comparison
    int i = 0;
    while (true)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Equal");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A is smaller");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B is smaller");
            break;
        }
        else if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A is smaller");
            break;
        }
        else if (a[i] > b[i])
        {
            printf("B is smaller");
            break;
        }
    }

    return 0;
}