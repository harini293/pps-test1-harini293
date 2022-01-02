<br> 5.	Write a program to Compare 3 numbers using 4 functions
	<br> a.	Pass by value	     //int cmp(int a, int b, int c) -> int input ()
	<br> b.	Pass by reference //void cmp(int a, int b, int c, int *large); -> void input (int *a, int *b)

#include <stdio.h>

int input();
int cmp(int a, int b,int c);


int main()
{ int a,b,c,lare;
 a=input();
 b=input();
 c=input();
 large= int cmp(a,b,c);
 printf("the large number is : ",large)
}

int input()
{
  int a;
  printf("enter any number : ");
  scanf("%d",&a);
  return 0;
}

int cmp(int a, int b, int c);
{ int large;
  if( a>b && a>c )
  large=a;
  else if (a<c)
  large=c;
  else if (a<b)
  large=b;
  return large;

}