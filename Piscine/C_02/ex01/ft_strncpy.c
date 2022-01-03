/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:25:45 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/04 22:03:18 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				size;

	size = 0;
	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
//#include <stdio.h>
//int    main(void)
//{
//    char src[] = "Source string.";
//    char dest[] = "Destination string.";
//    unsigned int n;
//
//    n = 15;
//
//    printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);
//
//    ft_strncpy(dest, src, n);
//
//    printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
//    return (0);
//}
