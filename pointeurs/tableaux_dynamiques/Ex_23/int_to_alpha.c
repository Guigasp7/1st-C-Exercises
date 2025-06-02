#include <stdio.h>
#include <stdlib.h>
#include "int_to_alpha.h"

int main(void)
{
	int num = -1470;
	char* result = int_to_alpha(num);
	printf("%s\n",result);
	free(result);
	return 0;
}

char* int_to_alpha(int num)
{
	int i = 1;
	int pow10 = 1;
	char* str = malloc(1 * sizeof(char));
	if (num < 0)
	{
		str[0] = '-';
		i++;
		str = realloc(str, i * sizeof(char));
		num *= -1;
	}

	while (num/pow10 >9)
	{
		pow10*=10;
	}

	int chiffre;
	while (pow10>=1)
	{
		chiffre = num/pow10;
		str[i-1] = (chiffre%10) + 48;
		pow10/=10;
		i++;
		str = realloc(str, i*sizeof(char));
	}
	str[i] = '\0';
	return str;
}
