/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vadachi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:17:28 by vadachi-          #+#    #+#             */
/*   Updated: 2024/08/27 13:08:57 by vadachi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	guard;

	guard = *a;
	*a = *b;
	*b = guard;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 45;
	b = 65;
	ft_swap(&a, &b);
	printf("%d %d", a, b);
}*/
