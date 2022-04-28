/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:00:54 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/01 11:03:29 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	firstletter;

	i = 0;
	firstletter = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' && firstletter == 0)
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' && firstletter == 1)
		{
			str[i] -= 32;
			firstletter = 0;
		}
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= '0' || str[i] <= '9')
		{
			firstletter = 0;
		}
		if ((str[i] < '0' || str[i] > '9') && (str[i] < 'a' || str[i] > 'z')
			&& (str[i] < 'A' || str[i] > 'Z'))
			firstletter = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	c[] = "YERAY es 1Topo";

	printf("%s", ft_strcapitalize(c));
}
*/