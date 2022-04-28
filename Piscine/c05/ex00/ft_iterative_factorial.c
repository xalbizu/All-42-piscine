/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:43:38 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/10 10:28:32 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = 0;
	i = nb;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		if (nb == i)
			result += nb;
		else
			result *= nb;
		nb--;
	}
	return (result);
}

/*int main(void)
{
	int num;

	num = 0;
	printf("%d", ft_iterative_factorial(num));
}*/
