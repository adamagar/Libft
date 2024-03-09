/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagar <aagar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:37:18 by aagar             #+#    #+#             */
/*   Updated: 2024/03/09 13:59:06 by aagar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	total_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	total_len = dst_len + src_len;
	i = 0;
	if (dst_len < dstsize - 1)
	{
		while (src[i] != '\0' && dst_len + i < dstsize - 1)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (total_len);
}
