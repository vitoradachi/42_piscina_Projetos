/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vadachi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:51:36 by vadachi-          #+#    #+#             */
/*   Updated: 2024/09/05 22:10:31 by vadachi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
		{
			return (0);
		}
		if ((str[i] > 65 && str[i] < 90) && (str[i] > 97 && str[i] < 122))
		{
			return (1);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	str[5] = "vitor78";

	printf("%d", ft_str_is_alpha(str));
}
