/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:21:19 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/07 19:21:24 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
//#include <stdio.h>
//int        main(void)
//{
//    char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    char *p_upr;
//    p_upr = uppercase;
//    
//    char allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    char *p_all;
//    p_all = allcases;
//
//    char empty[] = "";
//    char *p_emp;
//    p_emp = empty;
//
//    printf("%s => ", uppercase);
//    printf("%s\n", ft_strlowcase(p_upr));
//    printf("%s => ", allcases);
//    printf("%s\n", ft_strlowcase(p_all));
//    printf("Empty => %s\n", ft_strlowcase(p_emp));
//}
