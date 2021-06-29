/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:55:19 by hdrabi            #+#    #+#             */
/*   Updated: 2021/06/29 16:21:50 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_power(int nb, int p)
{
	if (p == 0)
		return (1);
	return (nb * ft_power(nb, p - 1));
}

int	ft_minus_nb(char *str)
{
	int	i;
	int	cp;

	i = 0;
	cp = 0;
	while (str[i])
	{
		if (str[i] == '-')
			cp++;
		if (str[i] >= '0' && str[i] <= '9')
			break ;
		i++;
	}
	return (cp);
}

void	ft_get_number(char *str, char *dest)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && (str[i] < '0' || str[i] > '9'))
	{
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		dest[j] = str[i];
		i++;
		j++;
	}
	dest[j] = '\0';
}

int	ft_atoi(char *str)
{
	int		dest_size;
	int		i;
	int		rst;
	int		minus;
	char	dest[11];

	dest_size = 0;
	i = 0;
	rst = 0;
	minus = ft_minus_nb(str);
	ft_get_number(str, dest);
	while (dest[dest_size])
		dest_size++;
	while (dest[i])
	{
		rst = rst + ((dest[i] - 48) * ft_power(10, dest_size - 1 - i));
		i++;
	}
	if (minus % 2 != 0)
		rst *= -1;
	return (rst);
}
/*
int	main(void)
{
	char	src[] = " ---+--+1234ab567";

	printf("the number is : %d", ft_atoi(src));
	return (0);
}
*/
