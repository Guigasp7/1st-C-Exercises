#include <stdio.h>
#include "string_length.h"

unsigned int string_length(char const* str)
{
	unsigned int NbChar = 0;
	while (str[NbChar]!='\0')
	{
		NbChar++;
	}
	return NbChar;
}
