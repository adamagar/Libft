/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagar <aagar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:49:21 by aagar             #+#    #+#             */
/*   Updated: 2024/02/19 11:13:40 by aagar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;
	size_t	i;

	len = ft_strlen(s1) + 1;
	dup = malloc(len);
	i = 0;
	if (dup == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	return (dup);
}
