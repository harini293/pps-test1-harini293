#include<stdio.h>

void input(int *a,int *b,int *c);
void cmp(int a,int b, int c,int *large);

int main()
{
   int a,b,c,large;
   input(&a,&b,&c);
   cmp(a,b,c,&large);
   printf("the larger number is %d",large);
}

void input(int *a, int *b, int *c)
{
	printf("enter a number : ");
	scanf("%d",a);
	printf("enter a number : ");
	scanf("%d",b);
	printf("enter a number : ");
	scanf("%d",c);
}

void cmp(int a,int b,int c,int *large)
{
	if(a>b && a>c)
	*large=a;
	else if(b>a)
	*large=b;
	else if(c>a)
	*large=c;
}