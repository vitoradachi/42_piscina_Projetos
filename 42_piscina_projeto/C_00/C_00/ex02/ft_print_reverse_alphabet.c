/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vadachi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:38:28 by vadachi-          #+#    #+#             */
/*   Updated: 2024/08/20 14:25:51 by vadachi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	contra;

	contra = 'z';
	while (contra >= 'a')
	{
		write (1, &contra, 1);
		contra--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
