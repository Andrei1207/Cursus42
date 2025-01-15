/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciobanu <aciobanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:14:46 by aciobanu          #+#    #+#             */
/*   Updated: 2024/12/09 17:25:52 by aciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *s, int c, size_t n)
{
    if(!s)
        return (0);
    size_t i;

    i = 0;
    while(i < n)
    {
        *(unsigned char*)(s + i) = (unsigned char)c;
    }
    return (s);
}