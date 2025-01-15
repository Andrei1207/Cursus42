/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciobanu <aciobanu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:17:06 by aciobanu          #+#    #+#             */
/*   Updated: 2024/12/09 17:25:55 by aciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void

 char **ft_split(char const *s, char c)
 {
   int   words;
   int   i;
   i = 0;

   words = 0;
   while(s != '\0')
   {
      if(s[i])
      {
         words++;
      }
      i++;
   }
    //char **split = *(char*)malloc()

 }