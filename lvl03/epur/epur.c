#include <unistd.h>

int		main(int argc, char const *argv[])
{
	int		i;
	int		onoff;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				onoff = 1;
			if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
			{
				if (onoff)
					write(1, " ", 1);
				onoff = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
