#include <stdio.h>
#include <stdbool.h>
#include "string_length.h"
#include "alpha_to_number.h"

int main(void)
{
	int n = alpha_to_number("-5");
	printf("%d\n",n);
	n = alpha_to_number("a42");
	printf("%d\n",n);
	n = alpha_to_number("78bf56");
	printf("%d\n",n);
	return 0;
}

int alpha_to_number(char const* str)
{
	int nb = 0;
	bool negatif = false;
	for (int i = 0; i<string_length(str); i++)
	{
		if ((str[i]<48 || str[i]>57) && str[i]!='-')
		{
			break;
		}
		else if (str[i]=='-')
		{
			negatif = true;
		}
		else
		{
			nb = nb*10+str[i]-48;
		}
	}
	if (nb!=0 && negatif)
	{
		nb *=-1;
	}
	return nb;
}
