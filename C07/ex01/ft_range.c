/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:49:13 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/05 15:12:26 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_range(int min, int max)
{
    int *t;
    int i;
    int count;

    if (min >= max)
        return (0);

    if (!(t = malloc(sizeof(int) * (max - min))))
        return (0);
    i = 0;
    count = max - min;
    while (i < count)
    {
        t[i] = min + i;
        i++;
    }
    return (t);
}
/*
int main()
{
    int *t;

    t = ft_range(2, 9);
    for (int i = 0; i < 7; i++)
    {
        printf(" %d |", t[i]);
    }
}
*/