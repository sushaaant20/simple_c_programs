#include<stdio.h>
#include <ctype.h>
void main()
{
	char ch;
	printf("\nEnter Character: ");
	scanf("%c",&ch);
	if(isalpha(ch))
	{
		printf("\n%c is a alphabet",ch);
		if(isupper(ch))
			printf("\n%c is uppercase alphabet",ch);
		else
			printf("\n%c is lowercase alphabet",ch);
	}
	else if(isdigit(ch))
		printf("\n%c is a digit",ch);
	else if(ispunct(ch))
		printf("\n%c is a punctuation",ch);
}
