/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciobanu <aciobanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:14:36 by aciobanu          #+#    #+#             */
/*   Updated: 2024/12/09 17:14:37 by aciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t	i;

	if (!dest)
		return (0);
	i = 0;
	while (i < n)
	{
		*(char*)(dest + i) = *(char*)(src + i);
		i++;
	}
	return (dest);
}