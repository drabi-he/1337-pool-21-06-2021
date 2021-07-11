/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:16:05 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/11 19:22:31 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include "ft_stock_str.h"
/*
typedef struct s_stock_str
{
    int size;
    char *str;
    char *copy;
} t_stock_str;
*/
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

void ft_putnbr(int nb)
{
    if (nb == INT_MIN)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb < 10)
        ft_putchar(nb + '0');
    else
    {
        ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + '0');
    }
}

void ft_show_tab(struct s_stock_str *par)
{
    int i;

    if (!par)
        return;
    i = 0;
    while (par[i].str)
    {
        ft_putstr(par[i].str);
        ft_putchar('\n');
        ft_putnbr(par[i].size);
        ft_putchar('\n');
        ft_putstr(par[i].copy);
        ft_putchar('\n');
        i++;
    }
}