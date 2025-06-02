#include <stdio.h>
#include "string_length.h"
#include "string_compare.h"

int main (void)
{
	char const* str1 = "abba";
	char const* str2 = "abbaa";
	printf("%d\n",string_compare(str1, str2));
	return 0;
}

int string_compare(char const* str1, char const* str2)
{
	int ordre;
	int str1L = string_length(str1);
	int str2L = string_length(str2);
	int maxLength;

	if (str1L>= str2L)
	{
		maxLength = str1L;
	}
	else
	{
		maxLength = str2L;
	}

	int i = 0;
	while(i<maxLength && str1[i]==str2[i])
	{
		i++;
	}

	if (i == maxLength)
	{
		if (str1L > str2L)
		{
			return 1;
		}
		else if(str2L > str1L)
		{
			return -1;
		}
	}

	if (str1[i]==str2[i])
	{
		return 0;
	}
	else if(str1[i]<str2[i])
	{
		return 1;
	}
	return -1;
}
