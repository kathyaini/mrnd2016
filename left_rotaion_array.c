
/*rotating a given array n number of times*\
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10];
	int i, n, m;
	void rotate(int b[10], int k, int l);
	printf("enter no of elements \n");
	scanf("%d", &n);
	printf("Enter %d elements \n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("enter number of rotations \n");
	scanf("%d", &m);
	rotate(a, n, m);
	
}
void rotate(int b[10], int k, int l)
{
	int i, temp = 0, j, x;
	if (k > l)
	{
		for (j = 0; j<l; j++)
		{

			temp = b[k-1];
			for (i = k - 1; i>0; i--)
			{

				b[i] = b[i - 1];
			}
			b[0] = temp;
		}
	}
	else if (k <= l)
	{
		x = l%k;
		rotate(b, k, x);
	}
	printf("elements after rotation is\n");
	for (i = 0; i<k; i++)
	{
		printf("%5d", b[i]);
	}
	getch();
}
