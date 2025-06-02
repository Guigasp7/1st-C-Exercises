#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "string_length.h"
#include "string_sized_copy.h"
#include "string_safe_copy.h"

char* string_safe_copy(char* dest, char const* src, unsigned int size_max)
{
	string_sized_copy(dest, src, size_max-1);
	dest[size_max] = '\0';
	return dest;
}
