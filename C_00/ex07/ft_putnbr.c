/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:06:49 by mmemis            #+#    #+#             */
/*   Updated: 2021/11/29 22:13:04 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 0)
	{
		if (n > 9)
		{
			ft_putnbr(n / 10);
		}
		ft_putchar(n % 10 + '0');
	}
	else if (n == -2147483648)
	{
		ft_putnbr(n / 10);
		ft_putchar('8');
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
}
