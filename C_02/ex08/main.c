/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:21:38 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/07 19:21:39 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *upr;
	upr = uppercase;
	
	char allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *p_all;
	p_all = allcases;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("\n-----\n%s = ", uppercase);
	printf("%s\n", ft_strlowcase(upr));
	printf("%s = ", allcases);
	printf("%s\n", ft_strlowcase(p_all));
	printf("Empty = %s\n-----\n", ft_strlowcase(p_emp));

}
