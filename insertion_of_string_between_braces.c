/*function which works as*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	int length(char a[20]);
	void insert(char t1[20], char t2[20]);
	char s1[20], s2[20];
	
	printf("enter string1\n");
	gets(s1);
	printf("enter string2\n");
	gets(s2);
	
	insert(s1, s2);
	getch();
}
int length(char a[20])
{
	int k;
	for (k = 0; a[k] != '\0'; k++);
	return (k);
}
void insert(char t1[20], char t2[20])
{
	char b[20];
	int i, j,x,y,m,n,flag=0;
	int l1, l2;
	
	l1 = length(t1);
	l2 = length(t2);
	if (l1 % 2 != 0)
		flag = 1;
	for (i = 0, j = l1 - 1; i < j; i++, j--)
	{
		switch (t1[i])
		{
		case '(':
			if (t1[j] != ')')
				flag = 1;
			break;
		case '[':
			if (t1[j] != ']')
				flag = 1;
			break;
		case '{':
			if (t1[j] != '}')
				flag = 1;
			break;
		case '<':
			if (t1[j] != '>')
				flag = 1;
			break;
		}
	}
	
	for (x =0; x < l1/2; x++)
	{
		
		b[x] = t1[x];
		
	}
	for (m = x, n = 0;t2[n]; m++, n++)
	{
		b[m] = t2[n];
		
	}
	for (m, x; t1[x];m++,x++)
	{
		b[m] = t1[x];
	}
	b[m] = '\0';
	if (flag == 1)
		printf("invalid input\n");
	else
		puts(b);
}
