/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagar <aagar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:46:21 by aagar             #+#    #+#             */
/*   Updated: 2024/02/19 13:35:50 by aagar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		ch;
	size_t				i;

	p = s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == ch)
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (NULL);
}
