/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 18:49:03 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/07 19:01:58 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_swap(char **argv, int i, int j)
{
	char	*str;
	int		k;

	str = NULL;
	k = 0;
	while (argv[j][k])
	{
		if (argv[j][k] != argv[i][k])
		{
			if ((unsigned char)argv[i][k] - (unsigned char)argv[j][k] > 0)
			{
				str = argv[i];
				argv[i] = argv[j];
				argv[j] = str;
			}
			break ;
		}
		k++;
	}
}

void	ft_print(char **argv, int i, int j)
{
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			ft_swap(argv, i, j);
			j++;
		}
		i++;
	}
	i = 1;
	ft_print(argv, i, j);
	return (argc);
}
