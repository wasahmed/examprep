
#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int		num1;
	int		num2;
	int		i;
	int 	d;
	int		min;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	i = 1;
	d = 1;
	if (num1 > num2)
		min = num2;
	else if (num1 < num2)
		min = num1;
	while(i <= min)
	{
		if (num1 % i == 0 && num2 % i == 0)
			d = i;
		i++;
	}
	printf("%i\n", d);
}
