/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:20:33 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/11 17:54:22 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
//#include <stdio.h>
//int        main(void)
//{
//    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
//    char *p_lwr;
//    p_lwr = lowercase;
//
//	  char allcases[] = "abcdfgklmnqrvwxyzACDEFGIJLMQUWXYZxcad;
//    char *p_all;
//    p_all = allcases;
//
//    char empty[] = "";
//    char *p_emp;
//    p_emp = empty;
//
//    printf("\n-----\n%s = ", lowercase);
//    printf("%s\n", ft_strupcase(p_lwr));
//    printf("%s = ", allcases);
//    printf("%s\n", ft_strupcase(p_all));
//    printf("Empty = %s\n", ft_strupcase(p_emp));
//}
