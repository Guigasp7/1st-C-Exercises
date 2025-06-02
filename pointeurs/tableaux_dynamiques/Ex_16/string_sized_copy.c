#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "string_sized_copy.h"
#include "string_length.h"

int main(void)
{
	char const* src = "that's a wowie";
	int size_max = 20;
	char* dest = malloc(4 * sizeof(char));
	dest[0] = 'w';
	dest[1] = 'i';
	dest[2] = 'n';
	dest[3] = '!';
	printf("%s\n", dest);
	char* result = string_sized_copy(dest, src, size_max);
	printf("%s\n", result);
	free(dest);
	return 0;
}

char* string_sized_copy(char* dest, char const* src, unsigned int size_max)
{
	dest = realloc(dest, size_max * sizeof(char));
	for(int i = 0; i < size_max && i < string_length(src); i++)
	{
		dest[i] = src[i];
	}
	return dest;
}
