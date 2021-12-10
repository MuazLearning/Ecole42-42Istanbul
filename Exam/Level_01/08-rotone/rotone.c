#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
    char *str = av[1];
	char tmp;

	if (ac == 2)
	{
		while (str[i])
		{
			if ((str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y'))
			{	
				tmp = str[i] + 1;
				write(1, &tmp, 1);
			}
			else if (str[i] == 'Z' || str[i] == 'z')
				(str[i] == 'Z') ? write(1, "A", 1) : write(1, "a", 1);
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
