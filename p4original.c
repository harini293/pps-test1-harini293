#include<stdio.h>

int input()
{
	int a;
 	printf("enter a number : ");
 	scanf("%d",&a);
 	return a;
}

int large(int a, int b, int c)
{
  if (a>b && a>c)
  return a;

  else if(b>c)
  return b;

  else
  return c;
}

void out(int big)
{
  printf("the larger numebr is %d",big);
}

int main()
{
	int a,b,c,big;
	a=input();
	b=input();
	c=input();
	big= large(a, b, c);
  out(big);
}