/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:01:41 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/04 22:10:01 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "bsq.h"

int	get_line_length(char *raw_map)
{
	int	i;

	i = 0;
	while (raw_map[i] != '\n')
		i++;
	return (i);
}

int	parse_lines(char *lines)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (lines[i] != '\0')
	{
		num = (num * 10) + (lines[i] - '0');
		i++;
	}
	return (num);
}

char	**populate_map(char **map, char *raw_map, int n_lines)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j < n_lines && raw_map[i] != '\0')
	{
		k = 0;
		while (raw_map[i] != '\n' && raw_map[i] != '\0')
		{
			map[j][k] = raw_map[i];
			i++;
			k++;
		}
		i++;
		j++;
	}
	return (map);
}

char	*get_metadata(char *raw_file, t_chars *chars)
{
	int		i;
	int		j;
	char	*char_lines;

	i = 0;
	while (raw_file[i] != '\n')
		i++;
	chars->full = raw_file[i - 1];
	chars->obstacle = raw_file[i - 2];
	chars->empty = raw_file[i - 3];
	char_lines = (char *) malloc((i - 2) * sizeof(char));
	j = 0;
	while (j < (i - 3))
	{
		char_lines[j] = raw_file[j];
		j++;
	}
	char_lines[j] = '\0';
	chars->n_lines = parse_lines(char_lines);
	free(char_lines);
	return (&raw_file[i + 1]);
}

char	**parse_map(char *raw_file, t_chars *chars)
{
	char	**map;
	char	*raw_map;
	int		i;

	raw_map = get_metadata(raw_file, chars);
	map = (char **) malloc((chars->n_lines + 1) * sizeof(char *));
	chars->n_columns = get_line_length(raw_map);
	map[chars->n_lines] = NULL;
	i = 0;
	while (i < chars->n_lines)
	{
		map[i] = (char *) malloc((chars->n_columns + 1) * sizeof(char));
		i++;
	}
	map = populate_map(map, raw_map, chars->n_lines);
	return (map);
}
