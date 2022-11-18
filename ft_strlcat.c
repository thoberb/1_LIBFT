/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:49:36 by bberthod          #+#    #+#             */
/*   Updated: 2022/11/08 11:25:45 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srcsize;
	size_t	dstsize;

	if (!dst || !src)
		return (0);
	srcsize = ft_strlen(src);
	dstsize = ft_strlen(dst);
	if (size < dstsize)
		return (srcsize + size);
	else
	{
		dst = dst + dstsize;
		ft_strlcpy(dst, src, size - dstsize);
		return (srcsize + dstsize);
	}
}

/*
int	main(void)
{
	char	src[50];
	char	dst[50];
	strcpy(src, "source");
	strcpy(dst, "destination ");
	ft_strlcat(dst, src, 30);
	printf("%s",dst);
}
*/
