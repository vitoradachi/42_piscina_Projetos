/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vadachi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:55:38 by vadachi-          #+#    #+#             */
/*   Updated: 2024/09/03 16:17:34 by vadachi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			return(0);
		}
		i++;
		return(1);
	}
	return(1);
}
/*
int	main(void)
{
	char	str[25] = "12P";

	printf("%d", ft_str_is_uppercase(str));
}*/
