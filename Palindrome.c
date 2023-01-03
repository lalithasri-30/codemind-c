#include<stdio.h>
int main()
{
    int n,i,r,s=0;
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {
        r=i%10;
        s=s*10+r;
        i=i/10;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}