/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:47:27 by bberthod          #+#    #+#             */
/*   Updated: 2022/11/08 14:22:05 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = ft_strlen(little);
	if (!i)
		return ((char *)big);
	while (*big && i <= len)
	{
		if (!ft_memcmp(big, little, i))
		{
			return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char big[60] = "trou du cul je m'appelle Appoline la vie";
	const char little[20] = "Appoline";
	printf("%s\n", ft_strnstr(big, little, 60));
}
*/
