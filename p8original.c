#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a number : ");
	scanf("%d",a);
	//540%10=0
	//540/10=54
    //54%10=4
    //54/10=5
    //5/10=0
    //5%10=
   do
   {
   
    b=a%10;
    a=a/10;
    printf("%d",b);
}
while(a/10>=0) ;

}