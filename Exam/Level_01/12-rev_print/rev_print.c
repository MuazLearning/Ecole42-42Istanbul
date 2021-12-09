#include <unistd.h>

int		ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

int		main(int ac, char **av)
{
	int	i = 0;
	int	len;
    
	if (ac == 2)
	{
		len = ft_strlen(av[1]) - 1;
		while (len >= 0)
		{
            write(1, &av[1][len], 1);
			len--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
