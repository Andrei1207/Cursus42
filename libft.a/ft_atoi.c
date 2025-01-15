/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciobanu <aciobanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:08:19 by aciobanu          #+#    #+#             */
/*   Updated: 2024/12/09 17:32:54 by aciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_atoi(char *str)
{
        int     i;
        int     sign;
        int     nb;

        i = 0;
        while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
                        || str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
                i++;
        sign = 1;
        while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
        {
                if (str[i] == '-')
                        sign *= -1;
                i++;
        }
        nb = 0;
        while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
        {
                nb = nb * 10 + str[i] - '0';
                i++;
        }
        return (nb * sign);
}