#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i;
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        int j,f=1;
        for(j=1;j<=a[i];j++)
        {
            f=f*j;
        }
        printf("%d
",f);
    }
}