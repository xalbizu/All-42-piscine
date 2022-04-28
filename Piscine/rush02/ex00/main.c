/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 13:27:16 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/06 20:02:01 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "headermain.h"

int	main(int argc, char *argv[])
{
	int		fd;
	char	buf[700];
	ssize_t	nr_bytes;

	fd = 0;
	nr_bytes = 0;
	if (argc < 2)
	{
		write(2, "Error. Argument expected", 24);
	}
	if (argc == 2)
	{
		oneargument(fd, buf, nr_bytes);
		argv[1] = getnumber(argv[1]);
		descompoundnumber(argv[1], buf);
	}
	else if (argc == 3)
	{
		twoarguments(fd, buf, nr_bytes, argv);
		argv[2] = getnumber(argv[2]);
		descompoundnumber(argv[2], buf);
	}
	return (0);
}

void	oneargument(int fd, char *buf, ssize_t nr_bytes)
{
	fd = open("../ex00/numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write(2, "Dict Error\n", 11);
	}
	nr_bytes = read(fd, buf, 690);
	close(fd);
}

void	twoarguments(int fd, char *buf, ssize_t nr_bytes, char *argv[])
{
	char	directory[40];

	ft_strcpy(directory, "../ex00/");
	fd = open(ft_strcat(directory, argv[1]), O_RDONLY);
	if (fd == -1)
	{
		write(2, "Dict Error\n", 11);
	}
	nr_bytes = read(fd, buf, 690);
	close(fd);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
