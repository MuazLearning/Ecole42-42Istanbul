/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:27:15 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/04 17:32:11 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		temp = tab[i];
		tab[i] = tab[size -1];
		tab[size - 1] = temp;
		size--;
		i++;
	}
}
//#include <stdio.h>
//int    main(void) {
//  int arrays[] = {5, 6, 0, 3, 853};
//  int *tab = arrays;
//
//  ft_rev_int_tab(tab, 5);
//  for(int i = 0; i < 5; i++)
//  {
//    printf("%d\n", tab[i]);
//  }
//  return 0;
//}
