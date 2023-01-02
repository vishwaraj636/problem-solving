#include<stdio.h>
void main()
{
int i,j,c='A';
for(i=1;i<=3;i++)
{
    for(j=i;j<=2*i-1;j++)
    {
        printf("%c",j);
    }
    printf("\n");
}
}
