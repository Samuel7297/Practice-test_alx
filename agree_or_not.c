#include <stdio.h>
	int main(void)
{	// prompt user for a response
	char c;
		printf("Enter a response: ");
		scanf("%c", &c);

	if (c == 'n' || c == 'N')
	{
		printf("not agree\n");
	}
	else if (c == 'y' || c == 'Y')
	{
		printf("agreed\n");
	}
}	
