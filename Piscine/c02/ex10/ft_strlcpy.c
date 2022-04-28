/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:34:11 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/01 11:44:04 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	*ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	*ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	while (src[i] != '\0')
	{
		i++;
	}
	dest[i] = '\0';
	return (i);
}
