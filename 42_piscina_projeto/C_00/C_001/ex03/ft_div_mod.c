/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vadachi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:18:07 by vadachi-          #+#    #+#             */
/*   Updated: 2024/08/26 18:13:28 by vadachi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{	
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 7;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d", div, mod);
}
*/
