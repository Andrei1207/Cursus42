/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciobanu <aciobanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:14:05 by aciobanu          #+#    #+#             */
/*   Updated: 2025/01/15 15:25:24 by aciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c)
		if ((c >= 48 && c <= 57)
			|| (c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122))
			return (1);
	return (0);
}
