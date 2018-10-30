/*Program to accept a character and check if it is uppercase or lowercase
 Turbo C not used
 */
#include<stdio.h>
#include <ctype.h>
void main()
{
	char ch;   /*initialize ch as a character */
	printf("\nEnter Character: ");  
	scanf("%c",&ch);
	if(isalpha(ch))    /* isalpaha is a predefined function in ctype.h header file and so are the other used in this program*/
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
