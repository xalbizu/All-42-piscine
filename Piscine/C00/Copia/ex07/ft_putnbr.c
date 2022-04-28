/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:24:44 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/02/21 16:44:02 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-546216);
}

void	ft_putnbr(int nb)
{
	char	num;

	if (nb <= 2147483647 && nb >= -2147483648)
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
		if (nb / 10)
		{
			ft_putnbr(nb / 10);
		}
		num = nb % 10 + '0';
		write(1, &num, 1);
	}
}
