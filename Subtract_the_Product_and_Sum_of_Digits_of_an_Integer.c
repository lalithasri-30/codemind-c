#include<stdio.h>
int main()
{
	int n,sum=0,pro=1,r,diff;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum+=r;
		pro*=r;
		n=n/10;
	}
	diff=pro-sum;
	printf("%d
",diff);
}