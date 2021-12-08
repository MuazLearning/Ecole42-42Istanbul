#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Sınavda main metodu silinip gönderilmeli!!
int main()
{
	int a = 5, b = 10;
	printf("Before => a: %d, b: %d\n", a, b);
	ft_swap(&a, &b);
	printf("After => a: %d, b: %d\n", a, b);
}
