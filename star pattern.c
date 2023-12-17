#include<stdio.h>
int main()
{
    int n,star=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=n-i;k>0;k--)
        {
            printf("  ");
        }
        for(int j=1;j<=star;j++)
        {
            printf("* ");
        }
        star+=2;
        for(int k=n-1;k>0;k--)
        {
            printf(" ");
        }
        printf("\n");
    }
}