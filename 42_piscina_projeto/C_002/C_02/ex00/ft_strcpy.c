/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vadachi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:29:44 by vadachi-          #+#    #+#             */
/*   Updated: 2024/09/04 13:04:22 by vadachi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest = src;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[20] = "vitor";
	char	src[20] = "adachi";

	printf("%s", ft_strcpy(dest, src));
}*/
