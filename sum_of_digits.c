/* To find sum of digits in a given number */
#include<conio.h>
#include<stdio.h>
void main()
{
	int sum(int x);
	int n, s;

	printf("Enter a number \n");
	scanf("%d", &n);
	s = sum(n);
	printf("Sum of Digit = %d\n", s);
	getch();
}
int sum(int x)
{
	int a = 0, d;
	if (x == 0) return (0);
	d = x % 10;
	a += d + sum(x / 10);
	return(a);
}
