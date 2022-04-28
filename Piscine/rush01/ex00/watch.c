/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   watch.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:38:37 by becastro          #+#    #+#             */
/*   Updated: 2022/02/27 23:31:05 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	watch_left(int *arr);
int	watch_right(int *arr);

int	watch_left(int *arr)
{
	int	index;
	int	visible_count;
	int	max_height;

	index = 0;
	max_height = 0;
	visible_count = 0;
	while (index < 4)
	{
		if (arr[index] > max_height)
		{
			max_height = arr[index];
			visible_count++;
		}
		index++;
	}
	return (visible_count);
}

int	watch_right(int *arr)
{
	int	index;
	int	visible_count;
	int	max_height;

	index = 3;
	max_height = 0;
	visible_count = 0;
	while (index >= 0)
	{
		if (arr[index] > max_height)
		{
			max_height = arr[index];
			visible_count++;
		}
		index--;
	}
	return (visible_count);
}
