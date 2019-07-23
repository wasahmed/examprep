#include <unistd.h>
#include <stdlib.h>

void	print_hex(size_t nb)
{
	char	*str;

	str = "0123456789abcdef";
	if (nb >= 16)
		print_hex(nb / 16);
	write(1, &str[nb % 16], 1);
}
int		main(int argc, char *argv[])
{
	if (argc == 2)
		print_hex(atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
