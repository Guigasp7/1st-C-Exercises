#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "string_sized_concatenate.h"
#include "string_sized_copy.h"
#include "string_length.h"

char* string_sized_concatenate(char* dest, char const* src, unsigned int size_max)
{
	int concat_start = string_length(dest);
	string_sized_copy(&dest[concat_start], src, size_max-concat_start);
	return dest;
}
