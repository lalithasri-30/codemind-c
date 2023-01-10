#include<stdio.h>
void height(int i);
int main()
{
    int i;
    scanf("%d",&i);
    height(i);
}
void height(int h)
{
    float c;
    c=2.54*h;
    printf("%0.2f",c);
}