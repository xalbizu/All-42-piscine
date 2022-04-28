/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:06:52 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/09 12:28:40 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_fibonacci(int index)
{
	int	num;

	num = 0;
	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	else if (index >= 0)
		num = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (num);
}

/*int	main(void)
{
	printf("%d", ft_fibonacci(10));
}*/
