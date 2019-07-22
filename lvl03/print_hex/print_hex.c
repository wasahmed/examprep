#include <unistd.h>
#include <stdlib.h>

void	print_hex(int p)
{
	char *str;

	str = "0123456789abcdef";
	if (p == 0)
		write(1, "0", 1);
	while (p)
	{
		write(1, &str[p % 16], 1);
		p = p/16;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		print_hex(atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
