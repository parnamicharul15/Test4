#include <stdio.h>

int main(void) 
{
    int a[2][3],i,j;
    int b[2][3], c[2][3];
    int sum_a=0, sum_b=0;

    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("Enter value for matrix a: row %d, column %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("Enter value for matrix b: row %d, column %d: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Array a:\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Array b:\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    for (i= 0 ;i< 2; i++)
    {
        for (j=0 ; j < 3; j++)
        {
            sum_a  += a[i][j];
        }
    }
    printf("Sum = %d \n",sum_a);

    for (i= 0 ;i< 2; i++)
    {
        for (j=0 ; j < 3; j++)
        {
            sum_b  += b[i][j];
        }
    }
    printf("Sum = %d \n",sum_b);

    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of two matrices is: \n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}