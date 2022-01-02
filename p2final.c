#include<stdio.h>

int input()
{
	int a;
	printf("enter any number :");
	scanf("%d",&a);
	return a;
}

int add(int a,int b)
{
	return (a+b);
}

int output(int a,int b,int c)
{
	printf("the sum of %d and %d is %d",a,b,c);

}

int main()
{
	int x,y,z,sum;
	x=  input();
	y= input();
  z= add(x,y);
  output(x,y,z);
  return sum;
}