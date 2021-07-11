/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:05:36 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/11 20:28:19 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
/*
typedef struct s_stock_str
{
    int size;
    char *str;
    char *copy;
} t_stock_str;
*/
char	*ft_strdup(char *src)
{
	char	*copy;
	int		size;
	int		i;

	size = 0;
	while (src[size])
		size++;
	copy = malloc(sizeof(char) * (size + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*rst;
	int			i;
	int			j;

	if (ac < 0)
		ac = 0;
	rst = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!rst)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		rst[i].size = j;
		rst[i].str = av[i];
		rst[i].copy = ft_strdup(av[i]);
		i++;
	}
	rst[i].str = '\0';
	return (rst);
}
/*
int main()
{
    char *av[3] = {"real eyes", "realize", "real lies"};
    int ac = 3;
    t_stock_str *rst;
    int i = 0;

    rst = ft_strs_to_tab(ac, av);
    while (i < ac)
    {
        printf("size = %d\n", rst[i].size);
        printf("str = %s\n", rst[i].str);
        printf("copy = %s\n", rst[i].copy);
        i++;
    }
}
*/
