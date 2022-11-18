/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:13:14 by bberthod          #+#    #+#             */
/*   Updated: 2022/11/17 09:47:31 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
int	main(void)
{
	int	c;

	c = 87;
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
}
*/
