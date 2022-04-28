/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:10:33 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/07 15:56:34 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	n;

	j = 0;
	i = 0;
	n = 0;
	while (to_find[n])
		n++;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (str[j + i] == to_find[j] && to_find[j])
			{
				j++;
			}
			if (j == n)
				return (&str[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char str[] = "si porque Yeray es un topo estoy seguro";
	char tofind[] = "Yeray es un topo";

	printf("%s",ft_strstr(str,tofind));
}*/
