/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:34:53 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/02/21 13:38:54 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writenumbers(int n1, int n2, int n3, int n4);

void	searchandwrite(int n1, int n2, int n3, int n4);

void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;
	int	num3;
	int	num4;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	num4 = '0';
	searchandwrite(num1, num2, num3, num4);
}

void	searchandwrite(int n1, int n2, int n3, int n4)
{
	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			while (n3 <= '9')
			{
				n4 = n2 + 1;
				while (n4 <= '9')
				{
					writenumbers(n1, n2, n3, n4);
					n4++;
				}
				n3++;
			}
			n2++;
			n3 = '0';
		}
		n1++;
		n2 = '0';
	}	
}

void	writenumbers(int n1, int n2, int n3, int n4)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, " ", 1);
	write(1, &n3, 1);
	write(1, &n4, 1);
	write(1, ", ", 2);
}
