/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:00:22 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/05 19:28:41 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int lenght;

    lenght = ft_strlen(sep);
    printf("lenght = %d\n", lenght);
    lenght += ft_strlen(strs);

    return ('c');
}

int main()
{
    char *sep = " | ";
    char col[5][6] = {"1", "22", "333", "4444", "55555"};

    printf("********\n%c\n", ft_strjoin(5, col, sep));
}