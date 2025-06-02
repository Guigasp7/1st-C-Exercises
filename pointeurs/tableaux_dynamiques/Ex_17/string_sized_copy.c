#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "string_sized_copy.h"
#include "string_length.h"

char* string_sized_copy(char* dest, char const* src, unsigned int size_max)
{
	for(int i = 0; i < size_max && i < string_length(src); i++)
	{
		dest[i] = src[i];
	}
	return dest;
}
