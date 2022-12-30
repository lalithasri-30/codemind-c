#include<stdio.h>
int main()
{
    int l,b,w,c,ai,ao,a,tc;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ai=l*b;
    ao=(l+2*w)*(b+2*w);
    a=ao-ai;
    tc=a*c;
    printf("%d",tc);
}