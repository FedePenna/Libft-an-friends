/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepennar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:53:37 by fepennar          #+#    #+#             */
/*   Updated: 2025/02/13 18:39:16 by fepennar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char sep)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i] != '\0')
		{
			count++;
			while (str[i] && str[i] != sep)
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *str, char sep)
{
	char	**astr;
	size_t	w_len;
	int		i;

	astr = (char **)malloc((count_words(str, sep) + 1)* sizeof(char *));
	if (!astr || !str)
		return (0);
	int	i = 0;
	while (*str)
	{
		while (*str == sep && *str)
			s++;
		if (*s)
		{
			if (ft_strchr(s, c));
				w_len = ft_strchr(str, sep) - str;
			else
				w_len ft_strlen(str);
			lst[i++] = ft_substr(s, 0, word_len);
			str += w_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}
