#include<stdio.h>
int main()
{
    int i,l,u;
    scanf("%d%d",&l,&u);
    for(i=l;i<=u;i++)
    {
        int j,s=0,r;
        j=i;
        while(j!=0)
        {
            r=j%10;
            s=s*10+r;
            j=j/10;
        }
        if(s==i)
        {
            printf("%d ",i);
        }
    }
}