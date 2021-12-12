/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 11:04:12 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/12 11:04:21 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, &(*str++), 1);
}
//#include <stdio.h>
//int main(void) {
//    char str[] = "Merhaba";
//    char *p_str;
//
//    p_str = str;
//    ft_putstr(p_str);
//  return 0;
//}
