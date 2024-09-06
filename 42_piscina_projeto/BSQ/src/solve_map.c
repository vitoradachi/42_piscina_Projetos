/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:26:39 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/04 21:02:30 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdlib.h>

int	is_valid_square(char **map, t_answers *answer, t_chars *chars)
{
	int	i;
	int	j;

	if (answer->xn >= chars->n_lines || answer->yn >= chars->n_columns)
		return (0);
	if (map[answer->xn][answer->yn] == chars->obstacle)
		return (0);
	j = answer->y0;
	while (j <= answer->yn)
	{
		i = answer->x0;
		while (i <= answer->xn)
		{
			if (map[i][j] == chars->obstacle)
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

t_answers	*get_biggest_square(char **map, t_answers *answer, t_chars *chars)
{
	if (is_valid_square(map, answer, chars))
	{
		answer->xn = answer->xn + 1;
		answer->yn = answer->yn + 1;
		return (get_biggest_square(map, answer, chars));
	}
	else
	{
		if (answer->x0 == answer->xn && answer->y0 == answer->yn)
			return (answer);
		answer->xn = answer->xn - 1;
		answer->yn = answer->yn - 1;
		answer->size = answer->xn - answer->x0;
		return (answer);
	}
}

t_answers	*solve_map(char **map, t_chars *chars, int i, int j)
{
	t_answers	*answer;
	t_answers	*biggest_square;

	answer = (t_answers *) malloc(sizeof(t_answers));
	biggest_square = (t_answers *) malloc(sizeof(t_answers));
	biggest_square->size = -1;
	while (i < chars->n_lines)
	{
		j = 0;
		while (j < chars->n_columns)
		{
			answer->x0 = i;
			answer->y0 = j;
			answer->xn = i;
			answer->yn = j;
			answer->size = -1;
			answer = get_biggest_square(map, answer, chars);
			if (answer->size > biggest_square->size)
				*biggest_square = *answer;
			j++;
		}
		i++;
	}
	free(answer);
	return (biggest_square);
}
