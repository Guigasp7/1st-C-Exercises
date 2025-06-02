#include <stdio.h>
#include "swap_char.h"

void swap_char(char* a, char* b)
{
	char inter = *a;
	*a = *b;
	*b = inter;
}
