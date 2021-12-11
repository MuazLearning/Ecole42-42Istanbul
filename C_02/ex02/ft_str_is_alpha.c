/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:13:28 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/07 19:13:36 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 65) || (str[i] > 90 && str[i] < 97) || (str[i] > 122))
			return (0);
		i++;
	}
	return (1);
}
//#include <stdio.h>
//int        main(void)
//{
//    char loweralpha[] = "abcdefghi";
//    char *p_loweralpha;
//    p_loweralpha = loweralpha;
//
//    char upperalpha[] = "ASDCV";
//    char *p_upperalpha;
//    p_upperalpha = upperalpha;
//    
//    char notalpha[] = "ASDCV_";
//    char *p_notalpha;
//    p_notalpha = notalpha;
//
//    char empty[] = "";
//    char *p_emp;
//    p_emp = empty;
//
//    printf("%s = %d\n", loweralpha, ft_str_is_alpha(p_loweralpha));
//    printf("%s = %d\n", upperalpha, ft_str_is_alpha(p_upperalpha));
//    printf("%s = %d\n", notalpha, ft_str_is_alpha(p_notalpha));
//    printf("Empty = %d\n", ft_str_is_alpha(p_emp));
//
//    return (0);
//}
