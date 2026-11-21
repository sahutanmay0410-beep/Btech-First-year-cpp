#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c);
    printf("%d is largest number",a);
    if(b>a && b>c);
    printf("%d is larget number",b);
    if(c>a && c>b);
    printf("%d is larget number",c);
    return 0;
}
