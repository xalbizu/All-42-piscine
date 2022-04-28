/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:34:30 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/02/23 10:12:46 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribir(int c, int z, int n);

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	j = '0';
	k = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				escribir(i, j, k);
				k++;
			}
			j++;
			k = '0';
		}
		i++;
		j = '0';
	}
}

void	escribir(int c, int z, int n)
{
	write(1, &c, 1);
	write(1, &z, 1);
	write(1, &n, 1);
	if (c != '7' || z != '8' || n != '9')
		write(1, ", ", 2);
}
