#include<stdio.h>

int main()
{
	int a,b,c,i;
	printf("enetr a number : ");
	scanf("%d",&a);
	while(a/10!=a)
   {
		b=a%10;
     	a=a/10;
	    printf("%d",b);
	    
    }
	
	
}
