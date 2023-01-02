#include<stdio.h>
void main()
{
    int i,n,s=0,fact=1;
    printf("enter number of elements in series");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
    {
        fact=fact*i;
        s=s+fact;
    }
    printf("the sum is %d",s);
}
