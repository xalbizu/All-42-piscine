/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:01:10 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/09 11:05:02 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	num;
	int	i;

	i = 0;
	num = 0;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
	{
		if (i == 0)
		num = nb;
		num = num * ft_recursive_power(nb, power - 1);
		i++;
	}
	return (num);
}
/*
int	main(void)
{
	int	num;

	num = 5;
	printf("%d", ft_recursive_power(num, 3));
}*/
