#include <stdio.h>
#include "swap_char.h"

int main (void)
{
	char a = 'A';
	char b = 'B';
	swap_char(&a, &b);
	printf("%c\n",a);
	printf("%c\n",b);
	return 0;
}

void swap_char(char* a, char* b)
{
	char inter = *a;
	*a = *b;
	*b = inter;
}
