#include <stdio.h>
void main()
{
 int n,i,j,target;
 int a[100];
 printf("Enter N: ");
 scanf("%d",&n);
 printf("Enter Elements: ");
 for (i=0 ;i<n ;i++)
 scanf("%d",&a[i]);
 printf("Enter target value: ");
 scanf("%d",&target);
 printf("Pairs: \n");
 for(i=0 ;i<n-1 ;i++)
 {
  for (j=i+1 ;j<n ;j++)
  {
   if(a[i] + a[j] == target)
   {
    printf("%d + %d = %d \n",a[i],a[j],target);
   }
  }
 }
}