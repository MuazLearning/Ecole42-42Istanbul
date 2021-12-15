/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:05:47 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/16 00:27:49 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	placeholder;

	placeholder = nb;
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power <= -1)
		return (0);
	while (power > 1)
	{
		nb *= placeholder;
		power--;
	}
	return (nb);
}
//#include <stdio.h>
//int	main(void)
//{
//	printf("%d\n", ft_iterative_power(5, 2));
//	printf("%d\n", ft_iterative_power(-2, 3));
//	printf("%d\n", ft_iterative_power(0, 2));
//    printf("%d\n", ft_iterative_power(-232, 0));
//    printf("%d\n", ft_iterative_power(-2, 10));
//    printf("%d\n", ft_iterative_power(-8, 6));
//    printf("%d\n", ft_iterative_power(-3, 9));
//    printf("%d\n", ft_iterative_power(-353, 1));
//	return (0);
//}
