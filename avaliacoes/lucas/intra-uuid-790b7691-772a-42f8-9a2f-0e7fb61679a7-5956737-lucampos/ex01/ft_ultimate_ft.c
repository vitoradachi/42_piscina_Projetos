/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:32:27 by lucampos          #+#    #+#             */
/*   Updated: 2024/08/26 14:21:40 by vadachi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int     main(void)
 {
         int     nbr;
         int     *p;
         int     **p2;
         int     ***p3;
         int     ****p4;
         int     *****p5;
         int     ******p6;
         int     *******p7;
         int     ********p8;
         int     *********p9;

         p = &nbr;
         p2 = &p;
         p3 = &p2;
         p4 = &p3;
         p5 = &p4;
         p6 = &p5;
         p7 = &p6;
         p8 = &p7;
         p9 = &p8;
         ft_ultimate_ft(p9);
         printf("%d\n", nbr);
         return (0);
 }

