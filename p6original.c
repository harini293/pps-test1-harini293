#include<stdio.h>
//sum of n num
int input();
int sum(int n);
void output(int n ,int sum);

int main()
{
	int a,n,add;
	n=input();
	add=sum(n);
	output(n,add);
}

int input()
{ 
  int n;
	printf("enter any number : ");
	scanf("%d",&n);
	return n;
}

int sum(int n)
{
int i,sum=0;
for(i=1;i<=n;i++)
	sum=sum+i;
 return sum;
}

void output(int n,int sum)
{   int i=1;
    printf("%d",i);
	for(i=2;i<=n;i++)
	{
	printf("+ %d ",i);
	}
	printf("=%d",sum);
}
