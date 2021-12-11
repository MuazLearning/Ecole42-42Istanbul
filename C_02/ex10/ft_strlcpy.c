/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:23:22 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/07 19:23:28 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count])
		count++;
	if (size != 0)
	{
		while (src[index] && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}
#include <stdio.h>
int        main(void)
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
