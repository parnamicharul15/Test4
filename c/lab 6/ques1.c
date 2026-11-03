#include <stdio.h>

int main()
{
    char str[100];
    int i, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] < '0' || str[i] > '9')
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("The input string contains only digits");
    else
        printf("The input string is alphanumeric.");

    return 0;
}