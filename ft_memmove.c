/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:02:44 by bberthod          #+#    #+#             */
/*   Updated: 2022/11/17 09:43:10 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*new_dest;
	unsigned char		*new_src;

	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		new_dest = (unsigned char *)dest;
		new_src = (unsigned char *)src;
		while (n--)
			*new_dest++ = *new_src++;
	}
	else
	{
		new_dest = (unsigned char *)dest + (n - 1);
		new_src = (unsigned char *)src + (n - 1);
		while (n--)
			*new_dest-- = *new_src--;
	}
	return (dest);
}

/*
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	str1 = (char *)src;
	str2 = (char *)dest;
	i = 0;
	if (str2 > str1)
	{
		while (n > 0)
		{
			str2[n] = str1[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			str2[i] = str1[i];
			i++;
		}
	}
	return (dest);
}

int main ()
{
   char dest[] = "oldstring";
   const char src[]  = "newstring";
   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);
   return(0);
}
*/
