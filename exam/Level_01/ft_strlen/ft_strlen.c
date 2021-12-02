#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return i;
}

int main()
{
	char strlen = ft_strlen("ass") + '0';
	write(1, &strlen, 1);
	return (0);
}
