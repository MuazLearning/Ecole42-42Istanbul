/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:38:25 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/12 14:41:02 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (nb > i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", ft_is_prime(2));
//	printf("%d\n", ft_is_prime(3));
//	printf("%d\n", ft_is_prime(7));
//	printf("%d\n", ft_is_prime(20));
//}
