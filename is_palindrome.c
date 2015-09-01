/*to check whether given string is palindrome or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char s[10];
	void palindrome(char t[10]);
	int length(char a[20]);
	printf("enter a string\n");
	gets(s);
	palindrome(s);
	getch();
}
void palindrome(char t[10])
{
	int i, j, l, flag = 0;
	l = length(t);
	
	for (i = 0; i<l; i++)
	{
		
		
		if (t[i] != t[l-i-1])
		{
			flag = 1;
			break;
		}
	}
			if (flag==0)
			{

				printf("string is palindrome\n");
			}
			else
			
				printf("string is not a palindrome\n");
	
	getch();
	
}
int length(char a[20])
{
	int k;
	for (k = 0; a[k] != '\0'; k++);
	

		return (k);
	

}
