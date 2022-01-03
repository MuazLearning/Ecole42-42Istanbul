#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	
	while (str[i])
		i++;
	return i;
}

// Sınavda main metodu silinip gönderilmeli!!
int main()
{
	printf("%d",  ft_strlen("123456789"));
}
