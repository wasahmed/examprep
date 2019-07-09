#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		length;
	int		j;
	int		i;
	char	temp;

	length = 0;
	while (str[length])
		length++;
	i = 0;
	j = length - 1;
	while (i < j)
	{
		temp = str[i];   //temp = 1st element
		str[i] = str[j];	// 1st element = last element
		str[j] = temp;	//last element = 1st element
		i++;
		j--;
	}
	return (str);
}

int 	main() // for test
{
	char str[] = "abc 123456 check this text";
	char str1[] = "                 	 \t   ";
	char str2[] = "Hello #@$@#$#@$$%*() World!";

	printf("Test 1:\n%s\n", ft_strrev(str));
	printf("Test 2:\n%s\n", ft_strrev(""));
	printf("Test 3:\n%s\n", ft_strrev(str1));
	printf("Test 4:\n%s\n", ft_strrev(str2));
	return (0);
}
