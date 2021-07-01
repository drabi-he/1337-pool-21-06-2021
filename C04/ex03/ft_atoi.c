/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:55:19 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/01 13:41:02 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_atoi(char *str)
{
	int	rst;
	int	i;
	int	minus;

	rst = 0;
	minus = 1;
	i = 0;
	while (str[i] && (str[i] <= '0' || str[i] >= '9'))
	{
		if (!((str[i] >= 9 && str[i] <= 13) || str[i] == ' '
				|| str[i] == '+' || str[i] == '-'))
			return (0);
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		rst = rst * 10 + str[i] - '0';
		i++;
	}
	return (rst * minus);
}
/*
int	main(void)
{
	char	*src = " ---+--+1234ab567";

	printf("the number is : %d", ft_atoi(src));
	return (0);
}
*/
