/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:27:00 by bberthod          #+#    #+#             */
/*   Updated: 2022/11/17 09:43:06 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	str1 = (char *)dest;
	str2 = (char *)src;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}

/*
int main ()
{
	const char src[50] = "Cette phrase doit atterir dans dest";
	char dest[50];
	strcpy(dest,"Heloooo!!");
	printf("%s\n", dest);
	ft_memcpy(dest, src, strlen(src)+1);
	printf("%s\n", dest);
	memcpy(dest, src, strlen(src)+1);
	printf("%s\n", dest);
	return(0);
}
*/
