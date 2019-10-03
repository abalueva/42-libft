/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalueva <abalueva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:25:35 by abalueva          #+#    #+#             */
/*   Updated: 2019/09/19 14:35:55 by abalueva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *str, int c, size_t n)
{
	unsigned char *p;

	p = (unsigned char *)str;
	while (n--)
		*p++ = (unsigned char)c;
	return (str);
}
