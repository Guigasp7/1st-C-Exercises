#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "string_length.h"
#include "string_sized_copy.h"
#include "string_sized_concatenate.h"
#include "string_safe_concatenate.h"

char* string_safe_concatenate(char* dest, char const* src, unsigned int size_max)
{
	string_sized_concatenate(dest, src, size_max-1);
	dest[size_max] = '\0';
	return dest;
}
