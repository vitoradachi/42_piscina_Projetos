/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vadachi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:24:04 by vadachi-          #+#    #+#             */
/*   Updated: 2024/08/28 18:15:05 by vadachi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i -1];
		tab[size - i -1] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	number[] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(number, 5);
	printf("%d %d %d %d %d", number[0], number[1], number[2], number[3], number[4]);
}*/
