/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:37:41 by lucampos          #+#    #+#             */
/*   Updated: 2024/08/26 14:52:46 by vadachi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	temp;

	while (*str != '\0')
	{
		temp = *str;
		write(1, &temp, 1);
		str++;
	}
}
int main ()
{
	char teste[] = "qualaquertesto";
	ft_putstr(teste);
}
