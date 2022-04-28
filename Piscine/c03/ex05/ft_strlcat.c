/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 11:38:24 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/07 16:08:57 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include<string.h>

int	ft_strlen(char *str);

unsigned int	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	*n;

	j = 0;
	n = 0;
	i = 0;
	i = ft_strlen(&src[i]);
	while (src[j] && j < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	n = &i;
	return (n);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char dest[] = "xavi";
	char src[] = "albizu";
	unsigned int nb;

	nb = 1;
	printf("%u %lu", *ft_strlcat(dest,src,nb),strlcat(dest,src,nb));
}
*/