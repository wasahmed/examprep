#include <stdio.h>
#include <stdlib.h>
int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		nbr;

	nbr = 0;
	i = 0;
	sign = 1;
	if (str == '\0')
		return (0);
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\v'
			|| str[i] == '\r' || str[i] == '\n' || str[i] == '\f')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + (str[i++] - '0');
	return (nbr * sign);
}

int		main()
{
	char nbr[] = "     		-21     ";
	printf("%d\n", atoi(nbr));
	printf("%d", ft_atoi(nbr));
	return (0);
}
