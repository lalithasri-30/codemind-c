#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,so=0,se=0,diff;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            se=se+a[i];
        }
        else
        {
            so=so+a[i];
        }
    }
    diff=abs(so-se);
    printf("%d",diff);
}
