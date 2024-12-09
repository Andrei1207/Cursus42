/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciobanu <aciobanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:08:33 by aciobanu          #+#    #+#             */
/*   Updated: 2024/12/09 17:25:58 by aciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
        unsigned int    i;
        unsigned int    j;
        unsigned int    s;
        unsigned int    d;
        int     it;

        j = 0;
        it = 0;

        while (dest[it] != '\0')
        {
                it++;
        }
        i = ft_strlen(dest);
        it = 0;

        while (dest[it] != '\0')
        {
                it++;
        }
        d = ft_strlen(dest);
        it = 0;

        while (src[it] != '\0')
        {
                it++;
        }
        s = ft_strlen(src);
        it = 0;

        if (size < 1)
                return (s + size);
        while (src[j] && i < size - 1)
        {
                dest[i] = src[j];
                j++;
                i++;
        }
        dest[i] = '\0';
        if (size < d)
                return (s + size);
        else
                return (d + s);
}