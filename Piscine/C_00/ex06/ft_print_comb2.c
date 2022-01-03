/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:15:02 by mmemis            #+#    #+#             */
/*   Updated: 2021/11/29 21:34:19 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n1, int n2)
{
	char	f1;
	char	f2;
	char	s1;
	char	s2;

	f1 = n1 / 10 + '0';
	f2 = n1 % 10 + '0';
	s1 = n2 / 10 + '0';
	s2 = n2 % 10 + '0';
	write(1, &f1, 1);
	write(1, &f2, 1);
	write(1, " ", 1);
	write(1, &s1, 1);
	write(1, &s2, 1);
	if (n1 != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 < 100)
		{
			ft_putchar(n1, n2);
			n2++;
		}
		n1++;
	}
}
