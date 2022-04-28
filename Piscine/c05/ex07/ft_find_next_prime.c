/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:21:48 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/10 10:58:43 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	divisible;

	i = 2;
	divisible = 0;
	if (nb == 0 || nb == 1)
		nb = 2;
	if (nb > 2147483629)
		return (2147483647);
	while (nb < nb + 1)
	{
		while (i < nb)
		{
			if (nb % i == 0)
				divisible = 1;
			i++;
		}
		if (divisible == 0)
			return (nb);
		nb ++;
		i = 2;
		divisible = 0;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_find_next_prime(67608));
}
*/