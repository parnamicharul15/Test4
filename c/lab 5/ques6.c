#include <stdio.h>
void main()
{
    int n, i;
    int a[100];
    int current = 1, longest = 1;
    int start = 0, longestStart = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 1; i < n; i++)
    {
        if(a[i] > a[i - 1])
        {
            current++;
        }
        else
        {
            current = 1;
            start = i;
        }
        if(current > longest)
        {
            longest = current;
            longestStart = start;
        }
    }
    printf("Longest increasing sequence: ");
    for(i = longestStart; i < longestStart + longest; i++)
        printf("%d ", a[i]);
    printf("\nLength = %d", longest);
}