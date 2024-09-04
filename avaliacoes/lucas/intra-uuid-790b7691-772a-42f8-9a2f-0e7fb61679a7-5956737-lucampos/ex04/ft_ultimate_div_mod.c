/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:22:37 by lucampos          #+#    #+#             */
/*   Updated: 2024/08/26 14:45:01 by vadachi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_backup;
	int	b_backup;

	a_backup = *a;
	b_backup = *b;
	*a = a_backup / b_backup;
	*b = a_backup % b_backup;
}
int main()
{
	int	a = 11;
	int	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a,b);
}
