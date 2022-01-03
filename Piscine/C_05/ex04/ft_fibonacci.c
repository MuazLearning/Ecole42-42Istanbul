/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:14:15 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/12 14:15:43 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (index);
	if (index <= 2)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
//#include <stdio.h>
//int	main(void)
//{
//	for (int i = 0; i <= 5; i++)
//		printf("%d\n", ft_fibonacci(i));
//	return (0);
//}
