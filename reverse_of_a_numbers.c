#include<stdio.h>
int main()
{
    int n,s=0,i,r;
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {
        r=i%10;
        s=s*10+r;
        i=i/10;
    }
    printf("%d",s);
}