/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:57:18 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/12 10:57:45 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}
//#include <stdio.h>
//int        main (void)
//{
//    char str[] = "12345";
//    char *p_str;
//
//    p_str = str;
//
//    int count = ft_strlen(p_str);
//    
//    printf("%d\n", count);
//}
