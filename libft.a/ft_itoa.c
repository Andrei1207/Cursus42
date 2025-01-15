/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciobanu <aciobanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:17:25 by aciobanu          #+#    #+#             */
/*   Updated: 2024/12/09 17:25:45 by aciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int count(int num)
{
    int i;

    i = 0;
    if(num < 0)
    {
        num *= -1;
    }
    while (num > 0)
    {
        num /= 10;
        i++;
    }
    return (i);
}

char    *ft_itoa(int n)
{
    int len;

    len = count(n);
    char *str;
    str = (char *)malloc(len * sizeof(char) + 1);
    if (n < 0)
    {
        str[0] = '-';
        n *= -1;
    }
    while(n >= 0)
    {
        str[len--] = (n % 10) + '0';
        n /= 10;
    }
    return (str);
}