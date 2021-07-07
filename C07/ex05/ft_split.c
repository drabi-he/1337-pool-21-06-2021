/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:40:03 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/07 17:51:03 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
    //main arguments
    char *str = "real eyes,realize|real lies";
    char *charset = " ,|";

    //return var
    char **rst;

    //allocating 2d pointer
    rst = malloc(sizeof(char *) * 3);

    //counters
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < 5)
    {
        rst[i] = malloc(sizeof(char) * (10));
    }

    while (j++ < 1)
    {
        k = 0;
        while (rst[i][k])
        {
            printf("|%d,%d", j, k);
            k++;
        }
        printf("\n");
    }
}