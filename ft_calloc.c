/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:07:24 by bberthod          #+#    #+#             */
/*   Updated: 2022/11/18 12:39:10 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (!nmemb || !size)
		return (NULL);
	if (size > 65535)
		return (NULL);
	ptr = (void*)malloc(sizeof(nmemb * size));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb);
	return (ptr);
}

/*
int	main(void)
{
	size_t nmemb;
	size_t size;

	nmemb = 3;
	size = 8;
	printf("%p\n", ft_calloc(nmemb, size));
	printf("%p\n", calloc(nmemb, size));
}
*/
