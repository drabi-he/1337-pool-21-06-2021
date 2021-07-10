/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:00:22 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/10 12:59:08 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_concta(char *dest, char *src)
{
	int	i;
	int	dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		lenght;
	int		i;
	char	*concat;

	if (size > 0)
		lenght = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		lenght += ft_strlen(strs[i]);
		i++;
	}
	concat = malloc(sizeof(char) * (lenght + 1));
	if (!concat)
		return (NULL);
	i = 0;
	*concat = 0;
	while (i < size)
	{
		ft_concta(concat, strs[i]);
		if (i < size - 1)
			ft_concta(concat, sep);
		i++;
	}
	return (concat);
}
/*
int main()
{
	char *sep = " | ";
	char *col[5];

	col[0] = "1";
	col[1] = "22";
	col[2] = "333";
	col[3] = "4444";
	col[4] = "55555";
	printf("********\n%s\n", ft_strjoin(0, col, sep));
}
*/
