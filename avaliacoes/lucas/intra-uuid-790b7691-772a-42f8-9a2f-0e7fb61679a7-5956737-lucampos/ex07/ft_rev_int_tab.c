/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:46:04 by lucampos          #+#    #+#             */
/*   Updated: 2024/08/26 15:12:31 by vadachi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	loop;
	int	store_rev;

	loop = 0;
	while (loop < (size - 2))
	{
		store_rev = tab[loop];
		tab[loop] = tab[size - loop - 1];
		tab[size - loop - 1] = store_rev;
		loop++;
	}
}
int main()
{
	int numero[] = {1,2,3,4,5};
	ft_rev_int_tab(numero, 5);
	printf("%d %d %d %d %d", numero[0], numero[1], numero[2], numero[3], numero[4]);
}
