/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:01:35 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/12 15:01:53 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = -1;
	argc++;
	while (argv[0][++i])
		write(1, &argv[0][i], 1);
	write(1, "\n", 1);
	return (0);
}
