/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:05:47 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/12 14:09:38 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (power--)
		res *= nb;
	return (res);
}
//#include <stdio.h>
//int	main(void)
//{
//	printf("%d\n", ft_iterative_power(5, 2));
//	printf("%d\n", ft_iterative_power(-2, 3));
//	printf("%d\n", ft_iterative_power(0, 2));
//	return (0);
//}
