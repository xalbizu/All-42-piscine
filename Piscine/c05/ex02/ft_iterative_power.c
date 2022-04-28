/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:08:35 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/10 11:38:55 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	num;
	int	i;

	i = 0;
	num = 0;
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power - 1)
	{
		if (i == 0)
		num = nb;
		num = num * nb;
		i++;
	}
	return (num);
}

/*int	main(void)
{
	int	num;

	num = 5;
	printf("%d", ft_iterative_power(100, 1));
}*/
