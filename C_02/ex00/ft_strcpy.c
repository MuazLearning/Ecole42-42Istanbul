/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:58:00 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/04 18:01:13 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//#include <stdio.h>
//int    main(void)
//{
//    char src[] = "Source string.";
//    char dest[] = "Destination string.";
//
//    printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);
//
//    ft_strcpy(dest, src);
//
//    printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
//    return (0);
//}
