/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfinalresult.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:09:08 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/02/27 22:39:12 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_matrix[6][6];

int		testhorizontaly(int *arr);
int		testverticaly(int *arr);
int		watch_left(int *arr);
int		watch_right(int *arr);
void	printfinalmatrix(void);

int	testfinalresult(void)
{
	int	array[4];

	if (testhorizontaly(array) == 0)
		return (0);
	else if (testverticaly(array) == 0)
		return (0);
	else
	{
		return (1);
	}
}

int	testverticaly(int *arr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			arr[j] = g_matrix[i + 1][j + 1];
			j++;
		}
		if (watch_right(arr) != g_matrix[i + 1][5]
			|| watch_left(arr) != g_matrix[i + 1][0])
		{
			return (0);
		}
		i++;
		j = 0;
	}
	return (1);
}

int	testhorizontaly(int *arr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			arr[j] = g_matrix[j + 1][i + 1];
			j++;
		}
		if (watch_right(arr) != g_matrix[5][i + 1]
			|| watch_left(arr) != g_matrix[0][i + 1])
		{
			return (0);
		}
		i++;
		j = 0;
	}
	return (1);
}
