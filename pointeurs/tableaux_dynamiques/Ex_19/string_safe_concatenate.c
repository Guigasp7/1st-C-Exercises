#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "string_length.h"
#include "string_sized_copy.h"
#include "string_sized_concatenate.h"
#include "string_safe_concatenate.h"

int main(void)
{
	char* dest = malloc(20 * sizeof(char));
	dest[0] = 'w';
	dest[1] = 'i';
	dest[2] = 'n';
	dest[3] = '\0';
	char const* src = " yup this is a win in my book";
	char* result = string_safe_concatenate(dest, src, 20);
	printf("%s\n", result);
	return 0;
}

char* string_safe_concatenate(char* dest, char const* src, unsigned int size_max)
{
	string_sized_concatenate(dest, src, size_max-1);
	dest[size_max] = '\0';
	return dest;
}
