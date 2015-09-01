/*to find the element if its position is given from end*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10];
	int i, j,  p;
	printf("enter a string\n");
	scanf("%s", a);
	printf("enter position\n");
	scanf("%d", &p);
	for (i = 0;a[i]; i++)
	{
		if (a[i + p] == '\0')
		{
			j = i;
			break;

		}
	}
	
	
	printf("%c", a[j]);
	getch();

}
