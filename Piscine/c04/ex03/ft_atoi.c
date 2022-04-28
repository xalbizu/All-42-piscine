/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:43:07 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/08 10:54:15 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>*/

int	ft_atoi(char *str)
{
	int		i;
	int		result;
	int		sign;

	sign = 0;
	result = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '1' && str[i] <= '9')
	{
		result = ((result * 10) + (str[i] - '0'));
		i++;
	}
	if (sign % 2 != 0)
		result *= -1;
	return (result);
}
/*
int	main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d", ft_atoi(argv[1]));
		return (0);
	}
}
*/