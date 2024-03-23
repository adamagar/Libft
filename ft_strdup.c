/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagar <aagar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:49:21 by aagar             #+#    #+#             */
/*   Updated: 2024/03/19 13:23:25 by aagar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s1) + 1;
	s2 = (char *)malloc(len);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1, len);
	return (s2);
}
