/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:55:16 by bberthod          #+#    #+#             */
/*   Updated: 2022/11/07 15:24:52 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
int	main(void)
{
	char str[50];
	
	strcpy(str,"Coucou ceci est un test");
	puts(str);	
	ft_bzero(str,7);
   	printf("%p\n", str);
	puts(str);
	bzero(str,7);
   	printf("%p\n", str);
        puts(str);
}
*/
