/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:41:52 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/12 16:11:36 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	unsigned int	i;

	if (nb < 3)
		return (2);
	if (!(nb % 2))
		nb++;
	i = 3;
	while (i * i <= (unsigned int)nb)
	{
		if (!(nb % i))
		{
			nb += 2;
			i = 1;
		}
		i += 2;
	}
	return (nb);
}
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", ft_find_next_prime(0));
//	printf("%d\n", ft_find_next_prime(9));
//	printf("%d\n", ft_find_next_prime(11));
//	printf("%d\n", ft_find_next_prime(25));
//	return 0;
//}
