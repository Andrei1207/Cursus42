/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciobanu <aciobanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:13:47 by aciobanu          #+#    #+#             */
/*   Updated: 2025/01/15 17:16:01 by aciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = -1;
	if (n > 0)
	{
		while ((size_t)++i < n)
		{
			*(unsigned char *)(s + i) = '\0';
		}
	}
}
