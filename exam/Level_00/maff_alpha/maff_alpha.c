#include <unistd.h>

int main()
{
	char even = 'a';
	char odd = 'B';

	while (odd <= 'Z')
	{
		write(1, &even, 1);
		write(1, &odd, 1);
		even += 2;
		odd += 2;
	}
	write(1, "\n", 1);
	return (0);
}
