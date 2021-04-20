#include<stdio.h>
#include<conio.h>
main()
{

int a[10],i,n,c[10];
printf("enter range");
scanf("%d",&n);
printf("enter %d vales\n",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	c[i]=a[i]-a[i+1];
	printf("%d\n",c[i]);
}
if(c[i]>c[i+1]&&c[i]>c[i+2]&&c[i]>c[i+3])
printf("greatest difference %d",c[i]);
else
if(c[i+1]>c[i]&&c[i+1]>c[i+2]&&c[i+1]>c[i+3])
printf("greatest difference %d",c[i+1]);
else
if(c[i+2]>c[i]&&c[i+2]>c[i+1]&&c[i+2]>c[i+3])
printf("greatest difference %d",c[i+2]);
else
printf("greatest difference %d",c[i+3]);
}
