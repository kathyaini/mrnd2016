#include<stdio.h>
#include<conio.h>
void main()
{
	int a, r;
	int divisible(int n);

	printf("enter the number\n");
	scanf("%d", &a);
	r = divisible(a);
	if (r==1)
		printf("given number is divisible by 11\n");
	else
		printf("given number is not divisible by 11\n");
	getch();
}
int divisible(int n)
{
int  o = 0, e = 0, r;
 if ((n>1 && n<10))
	return 0;
	while (n != 0)
	{
		o = n % 10 + o;
		n = n / 10;
		e = n % 10 + e;
		n = n / 10;
	}
	if (e == o)
	{
		return 1;
		
	}
	else
	{
		return divisible(o - e);
		
	}
	
		
}
