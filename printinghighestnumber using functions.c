#include<stdio.h>
int bigger_number(int,int,int)
int main()
{
	int n1,n2,n3,res=0;
	printf(" enter any three numbers");
	scanf("%d%d%d",&n1,&n2,&n3);
	res=bigger_number(n1,n2,n3);
	printf("biggest value:%d",res); 
}
int bigger_number(int a,int b,int c)
{
		
	if(a>b && a>c)
	{
		return a;
	}
	else if(b>a && b>c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
