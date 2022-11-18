/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:53:30 by bberthod          #+#    #+#             */
/*   Updated: 2022/11/07 14:09:24 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
int	main(void)
{
	char	*str;
	const char	*s;

	str = "oihfoidhfs";
	s = str;
	printf("%ld\n", ft_strlen(s));
	printf("%ld\n", strlen(s));
}
*/
