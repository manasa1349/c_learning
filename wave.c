#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int up=0;
    int down=0;
    int pe=n%10;
    n/=10;
    int ps=n%10;
    n/=10;
    if(ps > pe){
        up=1;
    }
    if(pe>ps){
        down=1;
    }
    bool flag=true;
    while(n){
        pe=ps;
        ps=n%10;
        n/=10;
        if(down==1 && ps>pe){
            up=1;
            down=0;
        }
        else if(up==1 && ps<pe)
        {
            down=1;
            up=0;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag==true){
        printf("wave");
    }
    else{
        printf("not wave");
    }
}