/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:32:12 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/12 14:37:25 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;

	if (nb < 1)
		return (0);
	i = 1;
	while (i * i < (unsigned int)nb)
		i++;
	if (i * i == (unsigned int)nb)
		return (i);
	else
		return (0);
}
//#include <stdio.h>
//int	main()
//{
//	printf("%d\n", ft_sqrt(25));
//	printf("%d\n", ft_sqrt(121));
//	printf("%d\n", ft_sqrt(256));
//	return 0;
//}
