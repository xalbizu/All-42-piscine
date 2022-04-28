/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writefinalmatrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:21:23 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/02/27 23:30:57 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_matrix[6][6];
void	printchar(char c);

void	printfinalmatrix(void)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < 5)
	{
		while (j < 5)
		{
			printchar(g_matrix[i][j] + '0');
			j++;
		}
		write(1, "\n", 1);
		i++;
		j = 1;
	}
}

void	printchar(char c)
{
	write(1, &c, 1);
}
