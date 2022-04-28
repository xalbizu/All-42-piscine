/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:13:04 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/03 15:17:13 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*int main(void)
{
	char c1[] = "345654";
	char c2[] = "345543";
	unsigned int n = 4;

	printf("%d", ft_strncmp(c1, c2, n));
}*/
