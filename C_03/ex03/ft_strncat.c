/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:20:59 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/12 10:21:42 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	d = 0;
	while (dest[c])
		c++;
	while (src[d] && d < nb)
	{
		dest[c + d] = src[d];
		d++;
	}
	dest[c + d] = '\0';
	return (dest);
}
//#include <stdio.h>
//int main(void) {
//  char src[] = "src";
//  char dest[] = " - dest";
//  unsigned int nb = 6;
//
//  printf("%s\n", ft_strncat(src, dest, nb));
//  return 0;
//}
