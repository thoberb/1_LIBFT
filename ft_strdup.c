/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:33:52 by bberthod          #+#    #+#             */
/*   Updated: 2022/11/08 15:57:37 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;
	int		s_size;

	i = 0;
	s_size = ft_strlen(s);
	new = (char *) malloc(sizeof(*new) * (s_size + 1));
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
int	main(void)
{
	const char	s[] = "Tu parles aux arbres";

	printf("%s\n", ft_strdup(s));
	printf("%s\n", strdup(s));
}
*/
