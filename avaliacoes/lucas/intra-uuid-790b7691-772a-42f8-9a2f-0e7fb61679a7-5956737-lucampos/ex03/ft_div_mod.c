/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:09:07 by lucampos          #+#    #+#             */
/*   Updated: 2024/08/26 14:37:20 by vadachi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main ()
{
	int a = 11;
	int b = 2;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d %d", div,mod);
}
