#include <unistd.h>

void 	ft_putnbr(int n)
{
	char num;
	if (n < 0)
	{
		n -= n;
		write(1, "-", 1);
	}
	if (n <= 9)
	{
		num = n + '0';
		write (1, &num, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int		ft_atoi(char *str)
{
	int		nbr;
	int		i;
	int 	sign;

	if (!str)
		return (0);
	i = 0;
	nbr = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\f' || str[i] == '\v' || str[i] == '\n')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign -= 1;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return (nbr * sign)
}
int		main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "\n", 1);
}
