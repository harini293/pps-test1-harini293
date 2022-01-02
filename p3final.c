#include<stdio.h>

void input(int *m,int *n)
{
  printf("entetr any number :");
  scanf("%d",m);
  printf("enter any number :");
  scanf("%d",n);
}

void add(int m, int n, int* sum)
{
  *sum=m+n;
}

void output(int m,int n,int sum)
{
  printf("sum of %d + %d is %d",m,n,sum)
}

int main()
{
  int a,b,c;
  input(&a,&b);
  add(a,b,&c);
  output(a,b,c);
}