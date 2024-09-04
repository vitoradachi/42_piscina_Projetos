/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vadachi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:52:29 by vadachi-          #+#    #+#             */
/*   Updated: 2024/08/28 18:22:25 by vadachi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	contag;

	contag = 0;
	while (str[contag] != '\0')
	{
		contag++;
	}
	return (contag);
}
/*
int	main()
{
	char	escri[] = "testandoasletras";
	printf("%d", ft_strlen(escri));
}*/
