#include<stdio.h>
int add(int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
}
void main()
{
	int a,b,sum=0,c,m;
	printf("Enter gen and evs marks :");
	scanf("%d%d",&a,&b);
	sum=add(a,b);
	printf("%d is sum of two subjects.\n",sum);
	if(sum>50)
	{
		sum=0;
		printf("Eter mat and c marks :");
		scanf("%d%d",&m,&c);
		sum=add(m,c);
		printf("%d is sum of two subjects.\n",sum);
	}
}
