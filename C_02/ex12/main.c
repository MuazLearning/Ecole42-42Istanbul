/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:24:49 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/07 19:24:56 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_print_memory(void *addr, unsigned int size);

int main(void)
{
	char a[225] = "asş\0ldkflhsadlfjkaşslkdjf aodfgşkl\nasdjfşl şlak011243sjdflşkasd";
	ft_print_memory(a,100);
}
