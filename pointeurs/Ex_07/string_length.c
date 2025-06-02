#include <stdio.h>
#include "string_length.h"

int main(void)
{
	char* str = "Ce string fait 28 caracteres";
	printf("%s\n",str);
	printf("%d\n",string_length(str));
	return 0;
}

unsigned int string_length(char const* str)
{
	unsigned int NbChar = 0;
	while (str[NbChar]!='\0')
	{
		NbChar++;
	}
	return NbChar;
}
