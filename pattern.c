#include<stdio.h>
int main()
{
    int i,j,k,num=1,m=1,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i-1;j++)
        {
        printf(" ");
        }
        for(k=1;k<=m;k++)
        {
        printf("%d",num++);
        }
        m++;
        printf("\n");
    }
    return 0;
}
