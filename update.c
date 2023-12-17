#include<stdio.h>
void update(int *c)
{
    *c = *c + 10 ;
    // *b+ = 10;
    printf("%p\n",c);
}
int main()

{
    int a;
    scanf("%d",&a);
    int *b = &a;
    update (b);
    printf("%p\n%d",b,a);

}