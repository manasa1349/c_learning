 #include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int k=l*b;
    int ans=k-((l-2*w)*(b-2*w));
    if(k>ans)
    {
    printf("%d",ans*c);
    }
    else
    printf("Impossible");
}