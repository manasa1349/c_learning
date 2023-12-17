#include<stdio.h>
#include<math.h>
int main()
{
    int n,res;
    scanf("%d",&n);
    int b=0,place=1;
    while(n){
        res=n%2;
        n=n/2;
        b=b+(res*place);
        place=place*10;
    }
    printf("%d",b);
}