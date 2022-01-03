/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:14:21 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/07 19:15:05 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}
//#include <stdio.h>
//int        main(void)
//{
//    char numeric[] = "0123456789";
//    char *p_num;
//    p_num = numeric;
//
//    char special[] = "0123456789_";
//    char *p_spe;
//    p_spe = special;
//
//    char empty[] = "";
//    char *p_emp;
//    p_emp = empty;
//
//    printf("%s = %d\n", numeric, ft_str_is_numeric(p_num));
//    printf("%s = %d\n", special, ft_str_is_numeric(p_spe));
//    printf("Empty = %d\n", ft_str_is_numeric(p_emp));
//
//    return (0);
//}
