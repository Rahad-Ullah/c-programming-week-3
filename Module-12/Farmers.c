#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m1, m2, d1;
        scanf("%d %d %d", &m1, &m2, &d1);

        int d2 = (m1 * d1) / (m1 + m2);

        printf("%d\n", d1 - d2);
    }

    return 0;
}