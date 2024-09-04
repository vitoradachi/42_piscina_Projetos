/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vadachi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:30:42 by vadachi-          #+#    #+#             */
/*   Updated: 2024/09/03 16:51:19 by vadachi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 32 || str[i] > 127)
		{
			return (0);
		}
		i++;
		return (1);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[50] = "\n";

	printf("%d", ft_str_is_printable(str));
}*/
