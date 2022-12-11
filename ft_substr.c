/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:01:30 by bberthod          #+#    #+#             */
/*   Updated: 2022/11/24 13:15:59 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		start = slen;
	if (len > slen - start)
		len = slen - start;
	new = malloc(sizeof(*new) * (len + 1));
	if (!new)
		return (NULL);
	ft_memcpy((void *)new, (const void *)s + start, len);
	new[len] = 0;
	return (new);
}

/*
int	main(void)
{
	char const		s[] = "coucou_comment_tu_t'appellzfgdgggggggghtrhes_?";
	unsigned int	start;
	size_t			len;

	start = 7;
	len = 20;
	printf("%s\n", ft_substr(s, start, len));
}
*/
