/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trycombinations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:29:42 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/02/27 23:32:49 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		testfinalresult(void);
int		g_matrix[6][6];
int		g_combinationmatrix[24][4];
void	printfinalmatrix(void);
int		g_k;
int		g_m;
int		g_p;
void	doublewhile(int l, int m, int i, int j);

void	trycombinations(void)
{
	int	i;
	int	j;
	int	l;

	l = 0;
	g_m = 0;
	g_p = 0;
	i = 0;
	j = 0;
	g_k = 0;
	while (i < 24)
	{
		while (j < 24)
		{
			while (g_k < 24)
			{
				doublewhile(l, g_m, i, j);
				g_k++;
			}
			g_k = 0;
			j++;
		}
		i++;
		j = 0;
	}
}

void	doublewhile(int l, int m, int i, int j)
{
	while (l < 24)
	{
		while (m < 4)
		{
			g_matrix[1][m + 1] = g_combinationmatrix[i][m];
			g_matrix[2][m + 1] = g_combinationmatrix[j][m];
			g_matrix[3][m + 1] = g_combinationmatrix[g_k][m];
			g_matrix[4][m + 1] = g_combinationmatrix[l][m];
			m++;
		}
		if (testfinalresult() == 0 && i == 23 && j == 23
			&& g_k == 23 && l == 23 && g_p == 0)
		{
			write(1, "Error\n", 6);
		}
		else if (testfinalresult() == 1 && g_p == 0)
		{
			g_p = 1;
			printfinalmatrix();
		}
		m = 0;
		l++;
	}
	l = 0;
}
