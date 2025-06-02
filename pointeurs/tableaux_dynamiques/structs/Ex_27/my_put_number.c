#include <stdio.h>
#include "my_put_char.h"
#include "my_put_number.h"
void my_put_number(int num)
{
	int n = num;
	if (num < 0)
	{
		my_put_char('-');
		n = -num;
	}
	
	int div = 1;
	while(n / div > 9)
		div *= 10;

	while(div >= 1)
	{
		int digit = (n / div) % 10;
		my_put_char('0' + digit);
		div /= 10;
	}
}

