/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 09:56:00 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/12 09:57:23 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	say;

	say = ft_len(dest);
	while (*src)
	{
		dest[say] = *src;
		say++;
		src++;
	}
	dest[say] = '\0';
	return (dest);
}
//#include <stdio.h>
//int main(void) {
//  char src[] = "src";
//  char dest[] = " - dest";
//  unsigned int n = 0;
//  
//  printf("%s\n", ft_strcat(src, dest));
//  return 0;
//}
