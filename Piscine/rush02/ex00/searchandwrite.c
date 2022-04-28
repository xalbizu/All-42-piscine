/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchandwrite.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 11:32:58 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/06 20:03:06 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include"headermain.h"

void	searchandwrite(char *str, char *dict)
{
	int	index;
	int	started;

	started = -1;
	index = ft_strstr(dict, str);
	while (dict[index] != '\n')
	{
		if (dict[index] == ':' && started == -1)
			started = 0;
		if (((dict[index] >= 'a' && dict[index] <= 'z')
				|| (dict[index] >= 'A' && dict[index] <= 'Z')) && started == 0)
			started = 1;
		if (started == 1 && ((dict[index] >= 'a' && dict[index] <= 'z')
				|| (dict[index] >= 'A' && dict[index] <= 'Z')))
			write(1, &dict[index], 1);
		index++;
	}
}

void	searchandwritenum(char num, char *dict)
{
	int	index;
	int	started;

	started = -1;
	index = ft_strstrnum(dict, num);
	while (dict[index] != '\n')
	{
		if (dict[index] == ':' && started == -1)
			started = 0;
		if (((dict[index] >= 'a' && dict[index] <= 'z')
				|| (dict[index] >= 'A' && dict[index] <= 'Z')) && started == 0)
			started = 1;
		if (started == 1 && ((dict[index] >= 'a' && dict[index] <= 'z')
				|| (dict[index] >= 'A' && dict[index] <= 'Z')))
			write(1, &dict[index], 1);
		index++;
	}
}

int	ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	n;

	j = 0;
	i = 0;
	n = 0;
	while (to_find[n])
		n++;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (str[j + i] == to_find[j] && to_find[j])
			{
				j++;
			}
			if (j == n)
				return (i + j);
		}
		j = 0;
		i++;
	}
	return (0);
}

int	ft_strstrnum(char *str, char to_find)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find)
		{
			return (i + 1);
		}
		i++;
	}
	return (0);
}
