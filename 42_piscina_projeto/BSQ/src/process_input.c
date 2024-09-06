/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:00:12 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/04 22:10:26 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "bsq.h"
#include <stdlib.h>
#define MAX_BUFFER_SIZE 8192

void	free_objects(t_chars *chars, char **map)
{
	int	i;

	i = 0;
	while (i < chars->n_lines)
	{
		free(map[i]);
		i++;
	}
	free(map);
	free(chars);
	return ;
}

int	read_map_from_arg(char *filename, char *buffer)
{
	int		fd;
	int		size;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, &"Error while opening file\n", 26);
		return (0);
	}
	size = read(fd, buffer, MAX_BUFFER_SIZE);
	if (size < 0)
	{
		write(1, &"Error while reading file\n", 26);
		return (0);
	}
	buffer[size] = '\0';
	return (1);
}

int	read_map_from_std(char *buffer)
{
	int	byte_r;
	int	bytes_read;

	bytes_read = 0;
	while (1)
	{
		byte_r = read(STDIN_FILENO, buffer + bytes_read, 1);
		if (byte_r == 0 || bytes_read > MAX_BUFFER_SIZE - 1)
			break ;
		if (byte_r < 0)
		{
			write(1, &"Error while reading file\n", 26);
			return (0);
		}
		bytes_read += byte_r;
	}
	buffer[bytes_read] = '\0';
	return (1);
}

int	validate_map(char *raw_map)
{
	if (!validate_lines(raw_map))
		return (0);
	return (1);
}

void	process_map(char *filename, int argc)
{
	char		raw_file[MAX_BUFFER_SIZE];
	char		**map;
	t_answers	*answer;
	t_chars		*chars;

	if (argc > 1)
		read_map_from_arg(filename, raw_file);
	else
		read_map_from_std(raw_file);
	if (!validate_map(raw_file))
		return ;
	chars = (t_chars *) malloc(sizeof(t_chars));
	map = parse_map(raw_file, chars);
	answer = solve_map(map, chars, 0, 0);
	print_answer(map, answer, chars);
	free_objects(chars, map);
	return ;
}
