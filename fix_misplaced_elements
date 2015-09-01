/*Given a sorted array two are jumbled to keep them in their position*/ 
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20], i, n;
	void jumbled(int b[20],int m);
	printf("enter no of elements\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	jumbled(a,n);
	printf("the list of array elements:\n");
	for (i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}
	getch();
}
void jumbled(int b[20], int m)
{
	int i,j,temp,x,c,d,k;
	if ((m == 0) || (m == 1))
	{
		printf("elements are not jumbled\n");
	}
	else if (m == 2)
	{
		if (b[0] > b[1])
		{
			temp = b[0];
			b[0] = b[1];
			b[1] = temp;
		}
	}
	else if (m > 2)
	{
		for (i = 0; i < m; i++)
		{
			
			if (b[i]>b[i + 1])
			{
				j = i;
				
				c = j;
				
				break;
			}
		}
		
		for (k = j+1; k < m; k++)
		{
			
			if (b[k]<b[k + 1])
			{
				
				x = k;
			
				
				break;
			}
		}
		
		temp = b[c];
		b[c] = b[x];
		b[x] = temp;
		
		
	}
	
}
