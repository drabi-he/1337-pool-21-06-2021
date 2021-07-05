/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:22:04 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/05 15:12:32 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char *ft_strdup(char *src)
{
    char *copy;
    int size;
    int i;

    size = 0;
    while (src[size])
    {
        size++;
    }
    if (!(copy = malloc(sizeof(char) * (size + 1))))
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
/*
int main()
{
    char *src = "hello";
    printf("%s", ft_strdup(src));
}
*/