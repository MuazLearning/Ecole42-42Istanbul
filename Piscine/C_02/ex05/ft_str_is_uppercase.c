/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:18:05 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/07 19:18:12 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}
//#include <stdio.h>
//int        main(void)
//{
//    char uppercase[] = "SDFAFDEWI";
//    char *p_upr;
//    p_upr = uppercase;
//
//    char special[] = "abcdASDASKLDNLJKAShijklmnopqrstuvwxyz_";
//    char *p_spe;
//    p_spe = special;
//
//    char empty[] = "";
//    char *p_emp;
//    p_emp = empty;
//
//    printf("%s = %d\n", uppercase, ft_str_is_uppercase(p_upr));
//    printf("%s = %d\n", special, ft_str_is_uppercase(p_spe));
//    printf("Empty = %d\n", ft_str_is_uppercase(p_emp));
//
//    return (0);
//}
