/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 18:01:34 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/04 20:42:26 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i])
	{
		write(1, *argv + i, 1);
		i++;
	}
	return (argc);
}