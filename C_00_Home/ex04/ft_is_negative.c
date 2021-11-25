#include <unistd.h>

void ft_is_negative(int n){
	char pos = 'P';
	char neg = 'N';

	if(n >= 0)
		write(1,&pos,1);
	else
		write(1,&neg,1);
}
