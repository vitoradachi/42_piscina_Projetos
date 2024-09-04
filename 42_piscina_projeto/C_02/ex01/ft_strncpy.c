/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vadachi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:33:39 by vadachi-          #+#    #+#             */
/*   Updated: 2024/09/04 13:01:32 by vadachi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (src[i] < dest[i])
	{
		dest[i] = '\0';
	}
	return (dest);
}
/*
int	main(void)
{
	int	size_n = 5;
	char	dest[20] = "teste";
	char	src[20] = "abecde";

	printf("%s", ft_strncpy (dest, src, size_n));
}*/