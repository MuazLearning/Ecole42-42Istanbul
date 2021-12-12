/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:42:08 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/12 10:43:57 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;

	if (size <= length(dest))
		return (size + length(src));
	x = length(dest);
	y = 0;
	while (src[y] && x + 1 < size)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (length(dest) + length(&src[y]));
}
//#include <stdio.h>
//int main(void) {
//  char str[] = "1234";
//  char to_find[] = "5678";
//  unsigned int size = 4;
//
//  printf("%d\n", ft_strlcat(str, to_find, size));
//  return 0;
//}
