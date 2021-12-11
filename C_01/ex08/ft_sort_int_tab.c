/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmemis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:32:52 by mmemis            #+#    #+#             */
/*   Updated: 2021/12/11 14:53:22 by mmemis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	element;

	i = 1;
	while (i < size)
	{
		element = tab[i];
		j = i - 1;
		while (j >= 0 && tab[j] > element)
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = element;
		i++;
	}
}
//#include <stdio.h>
//int main(void) {
//  int arrays[6] = {0, 3, 323, 435, 5, 34};
//  int size = 6, i;
//  ft_sort_int_tab(arrays, size);
//  for(i = 0; i < size; i++)
//  {
//    printf("%d\n", arrays[i]);
//  }
//  return 0;
//}
