#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	int lcm = 0;
	int max;
	int index;
	int a1 = a;
	int b1 = b;

	if (a == 0 || b == 0)
		return (0);
	if (a1 > b1)
	{
		max = a1;
		index = a1;
	}
	else 
	{
		max = b1;
		index = b1;
	}
	while (1)
	{
		if (max % a1 == 0 && max % b1 == 0)
		{
			lcm = max;
			break ;
		}
		max += index;
	}
	return ((unsigned int) lcm);
}

int main()
{
	printf("%d", lcm(1,0));
	printf("\n%d", lcm(5, 2));

	return (0);
}

