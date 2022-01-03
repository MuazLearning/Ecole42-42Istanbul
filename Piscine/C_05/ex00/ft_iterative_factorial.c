/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:00:04 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/12 14:01:11 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
		fact *= nb--;
	return (fact);
}
//#include <stdio.h>
//int	main(void)
//{
//	printf("%d\n", ft_iterative_factorial(5));
//	printf("%d\n", ft_iterative_factorial(0));
//	printf("%d\n", ft_iterative_factorial(-1));
//	return (0);
//}
