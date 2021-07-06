/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:13:43 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/06 11:34:07 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	count;
	int	i;

	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (!tab)
		return (0);
	i = 0;
	count = max - min;
	while (i < count)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}
/*
int main()
{
    int **t;
    int cp;

    cp = ft_ultimate_range(t, 5, 9);
    printf("%d\n", cp);
    for (int i = 0; i < 4; i++)
    {
        printf(" %d |", t[0][i]);
    }
}
*/
