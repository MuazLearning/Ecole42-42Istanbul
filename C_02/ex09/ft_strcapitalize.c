/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:22:34 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/07 19:22:40 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && !is_alpha(str[i]))
			i++;
		if (str[i] && ((str[i] >= 'a') && (str[i] <= 'z')))
			str[i] -= 32;
		i++;
		while (str[i] && is_alpha(str[i]))
		{
			if ((str[i] >= 'A') && (str[i] <= 'Z'))
				str[i] += 32;
			i++;
		}
	}
	return (str);
}
//#include <stdio.h>
//int        main(void)
//{
//    char str1[] = "salt, commt tu vas ? 42mot quat-dux; cinqnte+et+un";
//
//    char str2[] = " sALT, ComMT tu VAS ? 42Mot QUat-dUX; cinQntE+ET+un";
//
//    char empty[] = "";
//
//    printf("-----\nBEF = %s", str1);
//    printf("\nAFT = %s\n", ft_strcapitalize(str1));
//    printf("\nBEF = %s", str2);
//    printf("\nAFt = %s\n", ft_strcapitalize(str2));
//    printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));
//}
