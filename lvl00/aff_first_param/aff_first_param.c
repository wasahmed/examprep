#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc < 2)
		write (1, "\n", 1);
	else
	{
		ft_putstr(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
