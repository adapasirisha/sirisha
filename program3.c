#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,r,n;
	printf("enter range");
	scanf("%d",r);
	for(i=r;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf("*");

		}
		printf("\n");
	}
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
			
		}
		printf("\n");
	}
	for(i=1;i<=r;i++)
	{
		for(j=i;j<=r;j++)
		{
			printf("*");
			
		}
		printf("\n");
		
	}
	for(i=r;i>0;i--)
	{
		for(j=r;j<=r;j--)
		{
			printf("*");
			
		}
		printf("\n");
	}
	n=2*(n*n)+2*n;
	printf("no.of stars %d",n);
	

}
