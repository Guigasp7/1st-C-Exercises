#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "string_length.h"
#include "string_sized_copy.h"
#include "string_safe_copy.h"
#include "string_duplicate.h"
#include "string_to_word_array.h"

int main(void)
{
	char const* str = "ceci est la chaine a separer\nceci	en	est	la	suite";
	char ** result = string_to_word_array(str);
	printf("%s\n",result);
	return 0;
}

char ** string_to_word_array(char const * str)
{
	int fullStringLen = string_length(str);
	char ** fullString = malloc(fullStringLen+2 * sizeof(char));
	fullString[fullStringLen] = '0';
	fullString[fullStringLen+1] = '\n';
	int lastWordIdx = 0;
	for (int i = 0; i < fullStringLen-2; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '	')
		{
			string_safe_copy(fullString[lastWordIdx], &str[lastWordIdx], i+1 - lastWordIdx);
			lastWordIdx = i+1;
		}
	}
	return fullString;
}
