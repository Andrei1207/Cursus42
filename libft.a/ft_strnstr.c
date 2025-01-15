/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciobanu <aciobanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:15:02 by aciobanu          #+#    #+#             */
/*   Updated: 2024/12/09 17:26:03 by aciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *haystack,	const char *needle, size_t len)
{
    int i;
    int j;

    j = 0;
    i = 0;
    if(!needle || !haystack)
        return 0;
    if(!needle || !needle[0])
        return ((char*)haystack);

    i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] &&
				i + j < len && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char*)(haystack + i));
		i++;
	}
	return (0);
}