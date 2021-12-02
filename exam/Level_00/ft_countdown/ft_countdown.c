#include <unistd.h>

int main()
{
	char num = '9';

	while (num >= '0')
	{
		write(1, &num, 1);
		num--;
	}
	write(1, "\n", 1);
	//write(1,"9876543210\n", 11); 
	return (0);
}
