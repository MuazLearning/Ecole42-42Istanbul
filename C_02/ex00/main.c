/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:01:24 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/04 22:12:23 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char src[] = "Source string.";
	char dest[] = "Destination string.";

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);

    ft_strcpy(dest, src);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}
