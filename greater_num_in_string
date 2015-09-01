#include<stdio.h>
#include<conio.h>
void main()
{
	char c[20], d[20];
	void largest(char a[20], char b[20]);
	printf(" Enter the first number \n");
	scanf("%s", c);
	printf(" Enter the second number \n");
	scanf("%s", d);
	printf(" the two numbers are %5s,%5s\n", c, d);
	largest(c, d);
	getch();
}
void largest(char a[], char b[])
{
	int i, j = 0, k = 0, l1 = 0, l2 = 0,flag;
	for (i = 0; a[i] == '0'; i++)
	{
		j++;

	}

	i = 0;

	for (i = 0; b[i] == '0'; i++)
	{
		k++;
	}

	for (i = j; a[i]; i++)
		l1++;
	
	for (i = k; b[i]; i++)
		l2++;
	

	if (l1<l2)
		flag = 2;
	else if (l1>l2)
		flag = 1;
	else 
	{
		while (a[j])
		{
			if (a[j] > b[k])
				flag = 1;
			else if (b[k] > a[j])
				flag = 2;

			else if (a[j] == b[k])
				flag = 0;
			k++;
			j++;
		}
	}
	if (flag==0)
		printf("both are equal");
	else if (flag==1)
		printf("string1 %s is greater", a);
	else if (flag==2)
		printf("string2 %s is greater", b);
}
