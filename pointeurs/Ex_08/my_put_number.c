#include <stdio.h>
#include "my_put_number.h"

int main(void)
{
	int nb = -1202;
	my_put_number(nb);
	return 0;
}

void my_put_number(int num)
{
	char numchar = 0;
	if (num<0)
	{
		my_put_char('-');
		num*=-1;
	}

	int Pow10 = 1;
	while (Pow10 < num)
	{
		Pow10*=10;
	}
	while (num>0)
	{
		Pow10/=10;
		numchar = num/Pow10 + 48;
		my_put_char(numchar);
		num %= Pow10;
	}
}

void my_put_char(char c)
{
	fwrite(&c, sizeof(char), 1, stdout);
}
