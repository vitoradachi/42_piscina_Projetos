/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:23:19 by rreal-de          #+#    #+#             */
/*   Updated: 2024/08/20 23:48:29 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	value;
	int	i;
	int	z;

	i = 0;
	while (i < size -1)
	{
		z = 0;
		while (z < size -1 - i)
		{
			if (tab[z] > tab[z +1])
			{
				value = tab[z];
				tab[z] = tab[z + 1];
				tab[z + 1] = value;
			}
			z++;
		}
		i++;
	}
}
