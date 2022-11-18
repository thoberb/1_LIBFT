/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:11:42 by bberthod          #+#    #+#             */
/*   Updated: 2022/11/17 10:45:51 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		len;
	size_t		f;
	size_t		i;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	f = size - 1;
	while (f > 0 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		f--;
	}
	dst[i] = '\0';
	return (len);
}

/*
int	main(void)
{
	char	src[40];
	char	dst[12];

	strcpy(src, "phrase a copier");
	strcpy(dst, "saIHFJDIOUH");
	printf("%ld\n",ft_strlcpy(dst, src, 17));
	puts(dst);
}
*/
