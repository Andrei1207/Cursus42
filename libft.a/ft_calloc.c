/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:57:39 by marvin            #+#    #+#             */
/*   Updated: 2025/01/09 16:57:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_calloc(size_t nelem, size_t elsize)
{
    void	*ptr;

	ptr = (void*)malloc(nelem * elsize);
	if (!ptr)
		return (0);
    int i;

    i = 0;
	while(ptr)
    {
        (char*)ptr[i] = '\0';


        i++;
    }
	return (ptr);
}