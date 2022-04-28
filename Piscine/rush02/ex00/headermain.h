/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headermain.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:48:39 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/03/06 20:04:26 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERMAIN_H
# define HEADERMAIN_H

char	*ft_strcat(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);
void	oneargument(int fd, char *buf, ssize_t nr_bytes);
void	twoarguments(int fd, char *buf, ssize_t nr_bytes, char *argv[]);
char	*getnumber(char *str);
void	searchandwrite(char *str, char *dict);
void	descompoundnumber(char *num, char *dict);
int		ft_strstr(char *str, char *to_find);
int		ft_strstrnum(char *str, char to_find);
int		ft_strlen(char *num);
void	searchandwrite(char *str, char *dict);
void	searchandwritenum(char num, char *dict);
void	hundreds(char *num, char *dict);
void	tents(char *num, char *dict);
void	ones(int count, char *num, char *dict, int index);

#endif