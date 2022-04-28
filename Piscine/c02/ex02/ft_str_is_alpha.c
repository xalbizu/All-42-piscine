/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:19:41 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/02/28 15:39:32 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && ((str[i] < 'A' || str[i] > 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*c;

	c = "Hello World";
	printf("%d", ft_str_is_alpha(c));
}
*/