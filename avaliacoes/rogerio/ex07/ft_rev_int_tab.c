/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 02:02:31 by rreal-de          #+#    #+#             */
/*   Updated: 2024/08/20 23:47:26 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	swap;

	size--;
	count = 0;
	{
		while (count < size)
		{
			swap = tab[count];
			tab[count] = tab[size];
			tab[size] = swap;
			size--;
			count++;
		}
	}
}
