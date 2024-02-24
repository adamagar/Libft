/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagar <aagar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:02:32 by aagar             #+#    #+#             */
/*   Updated: 2024/02/24 13:28:30 by aagar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	size_t	total_size;

	total_size = count * size;
	memory = malloc(total_size);
	if (memory == NULL)
	{
		return (NULL);
	}
	ft_bzero(memory, total_size);
	return (memory);
}
