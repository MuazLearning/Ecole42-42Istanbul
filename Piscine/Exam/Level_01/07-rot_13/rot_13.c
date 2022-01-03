#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
    char *str = av[1];

	if (ac == 2)
	{
		while (str[i])
		{
			if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
				av[1][i] += 13;
			else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
				av[1][i] -= 13;
			write(1, &str[i++], 1);;
		}
	}
	write(1, "\n", 1);
}
