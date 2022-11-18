/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:01:30 by bberthod          #+#    #+#             */
/*   Updated: 2022/11/18 12:32:44 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i, slen;
	char *a;

	if (s == NULL)
		return NULL;
	slen = ft_strlen(s);
	if (start > slen)
		start = slen;
	if (len > slen - start)
		len = slen - start;
	if (!(a = malloc((len + 1) * sizeof(char))))
		return NULL;
	for (i = 0; i < len; i++)
		a[i] = s[start + i];
	a[i] = '\0';
	return a;
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
