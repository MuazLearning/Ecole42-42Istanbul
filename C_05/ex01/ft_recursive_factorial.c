/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:02:08 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/12 14:04:29 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
//#include <stdio.h>
//int	main(void)
//{
//	printf("%d\n", ft_recursive_factorial(5));
//	printf("%d\n", ft_recursive_factorial(0));
//	printf("%d\n", ft_recursive_factorial(1));
//	printf("%d\n", ft_recursive_factorial(-1));
//	return (0);
//}
