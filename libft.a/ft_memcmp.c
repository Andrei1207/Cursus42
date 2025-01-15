/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciobanu <aciobanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:14:31 by aciobanu          #+#    #+#             */
/*   Updated: 2024/12/09 17:25:51 by aciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    if(!n)
        return (0);
        
    int i;
    unsigned char *us1;
    unsigned char *us2;

    us1 = (unsigned char*)s1;
    us2 = (unsigned char*)s2;
    i = 0;
    while(++i < n && *us1 == *us2)
    {
        us1++;
        us2++;
    }
    return ((int)(*us1 - *us2));
}