/* Display Nth term of fibonacci series */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, a[10], k;
	printf("enter no of terms to display : ");
	scanf("%d", &n);
	printf("enter position : ");
	scanf("%d", &k);
	a[0] = 0; a[1] = 1;
	for (i = 2; i<n; i++)
		a[i] = a[i - 1] + a[i - 2];
	printf("%d Terms of fibonacci series are \n", n);
	for (i = 0; i<n; i++)
		printf("%5d", a[i]);
	if (k>n)
	{
		printf("\n invalid input");
	}
	else
	{
		printf("\n the %dth term is %5d", a[k - 1]);
	}
	getch();
}
