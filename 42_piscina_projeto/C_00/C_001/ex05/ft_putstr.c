/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vadachi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:40:26 by vadachi-          #+#    #+#             */
/*   Updated: 2024/08/27 13:06:41 by vadachi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putstr(char *str)
{
	int	exb;

	while (*str != '\0')
	{
		exb = *str;
		write(1, &exb, 1);
		str++;
	}
}
/*
int	main()
{
	char	escrit[]="testedepalavras";

	ft_putstr(escrit);
}*/
