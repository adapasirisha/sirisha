#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int i;
	char s[10];
	
	gets(s);
	strrev(s);
	printf("%s",s);
	for(i=0;i<10;i++)
	{
		printf("%s",s[i]++);
}
}
