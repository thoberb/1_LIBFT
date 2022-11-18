/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:04:10 by bberthod          #+#    #+#             */
/*   Updated: 2022/11/08 12:28:53 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char s[] = "coucou belle gosse";
	const char c = 'e';
	char *res;
	res = ft_memchr(s, c, 20);
	printf("%s\n", res);
	res = memchr(s, c, 20);
	printf("%s\n", res);
}
*/
