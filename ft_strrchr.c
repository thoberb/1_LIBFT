/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:42:58 by bberthod          #+#    #+#             */
/*   Updated: 2022/11/17 10:18:13 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}

/*
int     main(void)
{
        const char s[] = "bonjour je m'appelle troll";
        const char c = 'o';
        printf("%s\n", strrchr(s, c));
        printf("%s\n", ft_strrchr(s, c));
}
*/
