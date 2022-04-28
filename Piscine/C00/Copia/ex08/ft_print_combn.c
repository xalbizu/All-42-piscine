/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:17:43 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/02/22 13:10:38 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 

void	ft_print_combn(int n);

void	writechar(int num[10], int n);

void	sumnum(int *num, int n);

int	main(void)
{
	ft_print_combn('5');
}

void	ft_print_combn(int n)
{
	int	num1[10];
	int	i;
	int	j;
	int	k;

	i = '0';
	j = '0';
	k = n - 1;
	while (j < n)
	{
		num1[j] = '0';
		j++;
	}
	while (i < n)
	{
		while (num1[k] < '9')
		{
			num1[k]++;
			writechar(num1, n);
			sumnum(num1, n);
		}
		i++;
	}
}

void	writechar(int *num, int n)
{
	int	i;

	i = '0';
	while (i < n)
	{
		write(1, &num[i], 1);
		i++;
	}
	write(1, ", ", 2);
}

void	sumnum(int *num, int n)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = '9';
	while (i < n)
	{
		k = (n - i - 1);
		l = n - i - 2;
		if (num[k] == j)
		{
			//write(1,"A",1);
			if (l >= '0')
			{
				num[l]++;
				num[k] = num[l];
				j--;
			}
		}
		else
		{
			break ;
		}
		i++;
	}
}
