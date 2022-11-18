/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:13:09 by bberthod          #+#    #+#             */
/*   Updated: 2022/11/07 14:52:58 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	char str[50];
	
	strcpy(str,"Coucou ceci est un test");
	puts(str);
	
	printf("%p\n",ft_memset(str,'$',7));
	printf("%p\n",memset(str,'$',7));

	ft_memset(str,'$',7);
   	puts(str);
	memset(str,'o',7);
        puts(str);
}
*/
