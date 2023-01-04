#include<stdio.h>
int main()
{
    int n,i,j,r,s,bp,ap,bd,ad; 
    scanf("%d",&n); for(i=n-1;i<n;i--) 
    { 
        j=i; 
        s=0;
        while(j!=0)
        {
            r=j%10;
            s=s*10+r;
            j=j/10; 
        } 
        if(s==i) 
        {
            bp=i;
            break; 
        } 
    }
    for(i=n+1;i>n;i++)
    {
        j=i;
        s=0;
        while(j!=0)
        {
            r=j%10;
            s=s*10+r; 
            j=j/10; 
        } 
        if(s==i)
        { 
            ap=i;
            break;
        }
    }
    bd=n-bp; 
    ad=ap-n;
    if(bd<ad) 
    {
        printf("%d",bp);
    }
    else if(bd==ad)
    {
        printf("%d %d",bp,ap);
    }
    else
    {
        printf("%d",ap);
    }
}