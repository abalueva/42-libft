/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalueva <abalueva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:25:31 by abalueva          #+#    #+#             */
/*   Updated: 2019/10/03 19:12:05 by abalueva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_find_size(char const *s, char c)
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		size++;
		while (s[i] != c)
			i++;
		i++;
	}
	return (size);
}

static char		**find(char const *s, char c, int len)
{
	int		i;
	int		j;
	int		z;
	char	**fresh;

	i = 0;
	z = 0;
	if (!(fresh = malloc(sizeof(char *) * (len + 1))) || !s || !c)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			++i;
		j = i;
		while (s[j] != c && s[j] != '\0')
			++j;
		fresh[z] = ft_strsub(s, z, j - i);
		z++;
		i = j;
	}
	fresh[z] = NULL;
	return (fresh);
}

char			**ft_strsplit(char const *s, char c)
{
	int		len;
	char	**fresh;

	if (!s)
		return (NULL);
	len = ft_find_size(s, c);
	fresh = find(s, c, len);
	return (fresh);
}
