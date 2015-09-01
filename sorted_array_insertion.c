/* Inserting a number into a sorted array*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], i, n, y, x;
	printf("enter no of elements \n");
	scanf("%d", &n);
	printf("Enter %d elements \n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("enter number to be inserted \n");
	scanf("%d", &x);
	for (i = 0; i<n; i++)
	if (x<a[i])
	{
		y = i;
		break;
	}
	for (i = n; i >= y; i--)
		a[i] = a[i - 1];
	a[y] = x;
	
	printf("\n elements in array after inserting number is :\n ");
	for (i = 0; i <= n; i++)
		printf("%5d", a[i]);

	getch();
}
}
 
