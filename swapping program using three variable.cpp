#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,temp;
	printf("enter two vlues are");
	scanf("%d%d" , &a , &b);
	printf("before swapping values are");
	printf("a=%d,b=%d" ,a,b);
	temp=a;
	b=temp;
	a=b;
	printf("after sswapping vlues are");
	printf("a=%d,b=%d" ,a,b);
	return 0;
}

