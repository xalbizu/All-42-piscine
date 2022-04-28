/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:14:44 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/10 10:51:25 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	num;
	int	i;

	i = nb;
	num = 0;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	if (nb == i)
	{
		num += nb;
	}
	if (nb > 1)
	{
		num = nb * ft_recursive_factorial(nb - 1);
	}
	return (num);
}
/*
int main(void)
{
	int num;

	num = -22;
	printf("%d", ft_recursive_factorial(num));
}*
