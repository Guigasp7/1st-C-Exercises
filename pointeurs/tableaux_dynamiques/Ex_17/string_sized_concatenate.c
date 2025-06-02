#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "string_sized_concatenate.h"
#include "string_sized_copy.h"
#include "string_length.h"

int main(void)
{
	char const* src = " that's a wowie";
	char* dest = malloc(12 * sizeof(char));
	dest[0] = 'w';
	dest[1] = 'i';
	dest[2] = 'n';
	dest[3] = '\0';
	printf("%s\n", dest);
	char* result = string_sized_concatenate(dest, src, 12);
	printf("%s\n", result);
	free(dest);
	return 0;
}

char* string_sized_concatenate(char* dest, char const* src, unsigned int size_max)
{
	int concat_start = string_length(dest);
	string_sized_copy(&dest[concat_start], src, size_max-concat_start);
	return dest;
}
