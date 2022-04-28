/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makecombinations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 11:14:21 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/02/27 23:25:44 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		watch_left(int *arr);
int		watch_right(int *arr);
void	writeinmatrix(int i, int j, int k, int l);
void	posiblecombinations(void);
void	posiblecombinations2(int i, int j);
void	writeinmatrix(int i, int j, int k, int l);
int	g_right;
int	g_left;
int	g_combinationmatrix[24][4];
int	g_index2;

void	combinationmatrix(void)
{
	g_right = 1;
	g_left = 1;
	g_index2 = 0;
	while (g_right <= 4)
	{
		while (g_left <= 4)
		{
			posiblecombinations();
			g_left++;
		}
		g_left = 1;
		g_right++;
	}
}

void	posiblecombinations(void)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= 4)
	{
		while (j <= 4)
		{
			posiblecombinations2(i, j);
			j++;
		}
		i++;
		j = 1;
	}
	i = 1;
}

void	posiblecombinations2(int i, int j)
{
	int	k;
	int	l;

	k = 1;
	l = 1;
	while (k <= 4)
	{
		while (l <= 4)
		{
			writeinmatrix(i, j, k, l);
			l++;
		}
		k++;
		l = 1;
	}
	k = 1;
}

void	writeinmatrix(int i, int j, int k, int l)
{
	int	str[4];
	int	index1;

	index1 = 0;
	str[0] = i;
	str[1] = j;
	str[2] = k;
	str[3] = l;
	if (watch_left(str) == g_left && i != j && i != k
		&& i != l && j != k && j != l && k != l)
	{
		if (watch_right(str) == g_right)
		{
			while (index1 < 4)
			{
				g_combinationmatrix[g_index2][index1] = str[index1];
				index1++;
			}
			index1 = 0;
			g_index2++;
		}
	}
}
