/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:31:22 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/04 21:20:04 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <unistd.h>

void	print_full_map(char **map, t_chars *chars)
{
	int	i;
	int	j;

	i = 0;
	while (i < chars->n_lines)
	{
		j = 0;
		while (j < chars->n_columns)
		{
			write(1, &map[i][j], 1);
			j++;
		}
		write(1, &"\n", 1);
		i++;
	}
	return ;
}

void	print_answer(char **map, t_answers *answer, t_chars *chars)
{
	int	i;
	int	j;

	j = answer->y0;
	while (j <= answer->yn)
	{
		i = answer->x0;
		while (i <= answer->xn)
		{
			map[i][j] = chars->full;
			i++;
		}
		j++;
	}
	print_full_map(map, chars);
	return ;
}
