/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 09:45:30 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/12 09:45:49 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
//#include <stdio.h>
//int main(void) {
//  char s1[] = "abc";
//  char s2[] = "abca";
//  unsigned int n = 5;
//  
//  printf("%d\n", ft_strncmp(s1, s2, n));
//  return 0;
//}
