/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:48:18 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/04 20:39:14 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

typedef struct s_answers
{
	int		x0;
	int		y0;
	int		xn;
	int		yn;
	int		size;
}			t_answers;

typedef struct s_chars
{
	char	empty;
	char	obstacle;
	char	full;
	int		n_lines;
	int		n_columns;
}			t_chars;

void		process_map(char *filename, int argc);

char		**parse_map(char *raw_file, t_chars *chars);

t_answers	*solve_map(char **map, t_chars *chars, int i, int j);

void		print_answer(char **map, t_answers *answer, t_chars *chars);

char		*get_metadata(char *raw_file, t_chars *chars);

int			validate_lines(char *raw_map);

#endif