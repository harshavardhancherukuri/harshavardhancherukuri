#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter any three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("highest number is:%d",a);
	}
	else if(b>a && b>c)
	{
		printf("highest number is:%d",b);
	}
	else if(c>b && c>a)
	{
		printf("highest number is:%d",c);
	}
	else
	{
		printf("they are equal");
	}
	
}
