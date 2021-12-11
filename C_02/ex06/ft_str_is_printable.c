/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:18:57 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/07 19:19:09 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 127))
			return (0);
		i++;
	}
	return (1);
}
//#include <stdio.h>
//int        main(void)
//{
//    char string[] = "Normal characters string";
//    char *p_str;
//    p_str = string;
//
//    char unpr[] = "Unprintables: \t (tab), \a (?)";
//    char *p_unp;
//    p_unp = unpr;
//
//    char empty[] = "";
//    char *p_emp;
//    p_emp = empty;
//
//    printf("%s = %d\n", string, ft_str_is_printable(p_str));
//    printf("%s = %d\n", unpr, ft_str_is_printable(p_unp));
//    printf("Empty = %d\n", ft_str_is_printable(p_emp));
//
//    return (0);
//}
