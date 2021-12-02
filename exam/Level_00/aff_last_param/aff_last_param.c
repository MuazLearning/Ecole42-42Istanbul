#include <unistd.h>

int main(int a, char **av)
{
	int i = 0;

	if(a > 1)
	{
		a--;
		while (av[a][i]){
			write(1,&av[a][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
