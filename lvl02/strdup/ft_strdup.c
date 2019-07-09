#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	char *dest;
	int		i;

	i = -1;
	if (!src || !(dest = (char*)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (NULL);
	while (src[++i])
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

int		main()
{
	char src[] = "HELLO";
	char *cpy;
	cpy = ft_strdup(src);
	printf("%s\n", src);
	printf("%s\n", cpy);
	return (0);
}
