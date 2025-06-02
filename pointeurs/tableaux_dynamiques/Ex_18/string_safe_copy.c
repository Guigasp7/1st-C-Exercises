#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "string_length.h"
#include "string_sized_copy.h"
#include "string_safe_copy.h"

int main(void)
{
	char* dest = malloc(20 * sizeof(char));
	char const* src = "Bro wtf you doin with that yeye a- cut";
	string_safe_copy(dest, src, 20);
	printf("%s\n",dest);
	return 0;
}

char* string_safe_copy(char* dest, char const* src, unsigned int size_max)
{
	string_sized_copy(dest, src, size_max-1);
	dest[size_max] = '\0';
	return dest;
}
