/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagar <aagar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:16:51 by aagar             #+#    #+#             */
/*   Updated: 2024/03/09 14:44:49 by aagar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_is_delimeter(char c, char sep)
{
	if (c == sep)
		return (1);
	else
		return (0);
}

static int	segment_count_segments(const char *str, char c)
{
	int	word_started;
	int	segment_count;

	word_started = 0;
	segment_count = 0;
	while (*str)
	{
		if (*str != c && word_started == 0)
		{
			word_started = 1;
			segment_count++;
		}
		else if (*str == c)
			word_started = 0;
		str++;
	}
	return (segment_count);
}

static int	cleanup_on_fail(char **arr, int k)
{
	int	i;

	i = 0;
	if (arr[k - 1] == NULL)
	{
		while (k > 0)
		{
			free(arr[k - 1]);
			k--;
		}
		return (1);
	}
	return (0);
}

static int	populate_array(char **array, char const *s, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		if (char_is_delimeter(s[i], c))
			i++;
		else
		{
			while (s[i + j] && !char_is_delimeter(s[i + j], c))
				j++;
			array[k++] = (char *)malloc((j + 1) * sizeof(char));
			if (cleanup_on_fail(array, k) == 1)
				return (1);
			ft_strlcpy(array[k - 1], s + i, j + 1);
		}
		i = i + j;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**split_strings;
	int		word_segment_count;

	if (!s)
		return (NULL);
	word_segment_count = segment_count_segments(s, c);
	split_strings = (char **)malloc((word_segment_count + 1) * sizeof(char *));
	if (!split_strings)
		return (NULL);
	if (populate_array(split_strings, s, c))
	{
		free(split_strings);
		return (NULL);
	}
	split_strings[word_segment_count] = NULL;
	return (split_strings);
}
