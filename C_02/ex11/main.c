/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:25:19 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/07 19:25:23 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char src[] = "Source";
	char dest[] = "";
	unsigned int n;

	n = 4;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);

    n = ft_strlcpy(dest, src, n);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d", src, dest, n);
	return (0);
}
