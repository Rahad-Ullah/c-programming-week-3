#include <stdio.h>
int main()
{
    // char str[6] = {'R', 'a', 'h', 'a', 'd', '\0'};
    // char str[6] = "Rahad";
    // char str[20] = "Rahad Ullah";
    char str[] = "Rahad Ullah";
    printf("%s", &str);

    return 0;
}