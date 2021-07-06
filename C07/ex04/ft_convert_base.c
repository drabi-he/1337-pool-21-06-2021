/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:34:24 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/06 17:08:05 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
void			ft_concta(char *dest, char *src);
int				ft_strlen(char *base);
unsigned int	ft_check_base(char *base);
int				ft_base_index(char *base, char c);
void			ft_print(unsigned int n, char *base,
					unsigned int size, char *nbr);

int	ft_atoi_base(char *str, char *base)
{
	int	minus;
	int	rst;

	minus = 1;
	if (!ft_check_base(base))
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	rst = 0;
	while (ft_base_index(base, *str) != ft_strlen(base))
	{
		rst = rst * ft_strlen(base) + ft_base_index(base, *str);
		str++;
	}
	return (rst * minus);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	unsigned int	size;
	char			*nbr2;

	if (nbr < 0)
	{
		n = -nbr;
	}
	else
		n = nbr;
	nbr2 = malloc(sizeof(char) * 11);
	if (nbr < 0)
		*nbr2 = '-';
	size = ft_strlen(base);
	ft_print(n, base, size, nbr2);
	return (nbr2);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*convert;
	int		nb;

	convert = malloc(sizeof(char) * (ft_strlen(nbr) + 1));
	if (!ft_check_base(base_from) || !ft_check_base(base_to) || !convert)
		return (NULL);
	convert = nbr;
	nb = ft_atoi_base(convert, base_from);
	convert = ft_putnbr_base(nb, base_to);
	nbr = convert;
	free(convert);
	return (nbr);
}
/*
int	main(void)
{
	char	*nbr = "  --+-10kjhkjh";
	char	*base_from = "0123456789";
	char	*base_to = "0123456789abcdef";

	printf("%s", ft_convert_base(nbr, base_from, base_to));
	return (0);
}
*/
