/*to print character which has more than n/2 occurance*/
#include<stdio.h>
#include<conio.h>
int main()
{
	char s1[20], i = 0, s;
	char repeat(char t1[20], int k);
	printf("enter string1\n");
	gets(s1);

	while (s1[i] != '\0')
	{
		i++;

	}
	s = repeat(s1, i);
	if (s != '\0')
	{
		printf("%c", s);
	}
	else
		printf("no charecter repeated\n");
	getch();
}
char repeat(char t1[20], int k)
{
	int a, b,c;
	for (a = 0; t1[a] != '\0'; a++)
	{
		c = 0;
		for (b = 0; t1[b] != '\0'; b++)
		{
			if (t1[a] == t1[b])
			{
				c++;
			}
		}
		if (c > k / 2)
			return (t1[a]);
		else
			return '\0';
	}
	
}
