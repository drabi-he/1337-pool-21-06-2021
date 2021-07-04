/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:29:42 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/04 15:26:50 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_base(char *base)
{
	int	base_size;
	int	j;

	base_size = 0;
	while (base[base_size])
	{
		if (base[base_size] == '-' || base[base_size] == '+'
			|| base[base_size] <= ' ')
			return (0);
		j = base_size + 1;
		while (base[j])
		{
			if (base[base_size] == base[j])
			{
				return (0);
			}
			j++;
		}
		base_size++;
	}
	if (base_size <= 1)
		return (0);
	return (base_size);
}

int	ft_base_index(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

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
	while (ft_base_index(base, *str) != ft_check_base(base))
	{
		rst = rst * ft_check_base(base) + ft_base_index(base, *str);
		str++;
	}
	return (rst * minus);
}
/*
int	main(void)
{
	printf("%d", ft_atoi_base(" --+a b", "0123456789abcdef"));
	return (0);
}
*/
