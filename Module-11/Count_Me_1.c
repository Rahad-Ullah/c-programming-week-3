#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int counter2 = 0;
    int counter3 = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            counter2++;
            continue;
        }
        if (num % 3 == 0)
        {
            counter3++;
        }
    }

    printf("%d %d", counter2, counter3);

    return 0;
}