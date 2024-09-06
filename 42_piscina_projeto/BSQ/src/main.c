/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:21:43 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/04 20:43:08 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc == 1)
		process_map(0, argc);
	else
	{
		while (i < argc)
		{
			process_map(argv[i], argc);
			i++;
		}
	}
	return (0);
}
