#include <stdio.h>
#include "string_length.h"

int string_length(char const* str)
{
	int i = 0;
	while (str[i]!='\0')
	{
		++i;
	}
	return i;
}
