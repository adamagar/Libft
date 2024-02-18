/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagar <aagar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:43:13 by aagar             #+#    #+#             */
/*   Updated: 2024/02/18 13:43:57 by aagar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d < s)
	{
		while (len > 0)
		{
			*d++ = *s++;
			len--;
		}
	}
	else
	{
		d += len;
		s += len;
		while (len > 0)
		{
			*--d = *--s;
			len--;
		}
	}
	return (dst);
}
