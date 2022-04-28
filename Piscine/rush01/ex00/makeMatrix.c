/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makeMatrix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 10:40:25 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/02/27 22:38:58 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	asigninputs(int *inp, int i, int j, int n);
int	g_matrix[6][6];

void	makematrix(int *inputs)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	n = 6;
	while (i < n)
	{
		while (j < n)
		{
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
			{
				g_matrix[i][j] = asigninputs(inputs, i, j, n);
			}
			else
			g_matrix[i][j] = 0;
			j++;
		}
		i++;
		j = 0;
	}
}

int	asigninputs(int *inp, int i, int j, int n)
{
	if (i == 0)
	{
		if (j == 0 || j == n - 1)
			return (0);
		return (inp[j - 1]);
	}
	if (i == n - 1)
	{
		if (j == 0 || j == n - 1)
			return (0);
		return (inp[j + 3]);
	}
	if (j == 0)
	{
		return (inp[i + 7]);
	}
	if (j == n - 1)
	{
		return (inp[i + 11]);
	}
	return (2);
}
