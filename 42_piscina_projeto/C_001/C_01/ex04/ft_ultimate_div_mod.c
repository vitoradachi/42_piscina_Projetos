/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vadachi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:15:14 by vadachi-          #+#    #+#             */
/*   Updated: 2024/08/27 12:38:33 by vadachi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	resta;
	int	restb;

	resta = *a;
	restb = *b;
	*a = resta / restb;
	*b = resta % restb;
}
/*
int	main()
{
	int	a = 11;
	int	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("%d""%d", a, b);
}*/
