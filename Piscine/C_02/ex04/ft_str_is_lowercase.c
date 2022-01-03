/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:17:13 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/07 19:17:17 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
//#include <stdio.h>
//int        main(void)
//{
//    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
//    char *p_lwr;
//    p_lwr = lowercase;
//
//    char special[] = "abcdASDASKLDNLJKAShijklmnopqrstuvwxyz_";
//    char *p_spe;
//    p_spe = special;
//
//    char empty[] = "";
//    char *p_emp;
//    p_emp = empty;
//
//    printf("%s = %d\n", lowercase, ft_str_is_lowercase(p_lwr));
//    printf("%s = %d\n", special, ft_str_is_lowercase(p_spe));
//    printf("Empty = %d\n", ft_str_is_lowercase(p_emp));
//
//    return (0);
//}
