/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 10:27:17 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/02/27 23:21:27 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	makematrix(int *inputs);
void	combinationmatrix(void);
void	trycombinations(void);
int		testfinalresult(void);

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	conditions[16];

	argc = 0;
	i = 0;
	j = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] != 32)
		{
			conditions[j] = argv[1][i] - 48;
			j++;
		}
		i++;
	}
	makematrix(conditions);
	combinationmatrix();
	trycombinations();
}
