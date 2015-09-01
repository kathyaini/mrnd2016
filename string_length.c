/*to find length of a string*/
#include <stdio.h>
#include<conio.h>


void main()
{
	char s[20];
	int  i, l = 0;

	printf("Enter a string\n");
	gets(s);

	for (i = 0; s[i]; i++)
	{
		                         
		l++;                    
	}
	printf("So, the length of %s =%d\n", s, l);
	getch();
}
