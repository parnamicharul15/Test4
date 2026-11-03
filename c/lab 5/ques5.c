#include <stdio.h>
void main()
{
    int n, i;
    int a[100];
    int diff, maxDiff;
    int x, y;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    maxDiff = a[1] - a[0];
    if(maxDiff < 0)
        maxDiff = -maxDiff;
    x = a[0];
    y = a[1];

    for(i = 1; i < n - 1; i++)
    {
        diff = a[i + 1] - a[i];
        if(diff < 0)
            diff = -diff;
        if(diff > maxDiff)
        {
            maxDiff = diff;
            y = a[i];
            x = a[i + 1];
        }
    }
    printf("%d and %d Difference = %d", x, y, maxDiff);
}