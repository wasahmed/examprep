#include <unistd.h>

int		main(int argc, char *argv[])
{
	//counter to iterate through the string
	int		i;

	i = 0;//set to 1st element
	//check that we have a 3 arguments besides a.out
	//make sure that the 3rd and 4th argument are only a single char
	if (argc == 4 && (argv[2][1] == '\0') && (argv[3][1] == '\0'))
	{
		//while the string exists
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])//if we are at the char being searched
				write(1, &argv[3][0], 1);// than replace it with last arg
			else
				write(1, &argv[1][i], 1);// otherwise just write what we have
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
