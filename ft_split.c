/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepennar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:53:37 by fepennar          #+#    #+#             */
/*   Updated: 2024/12/18 18:49:12 by fepennar         ###   ########.fr       */
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

static int	splitter(char **dest, char *src, char sep)
{
	int	l_word;
	int	i;
	int	index;
	int	begin;

	i = 0;
	index = 0;
	while (src[i])
	{
		while (src[i] == sep && src[i])
			i++;
		if (src[i] != '\0')
		{
			begin = i;
			while (src[i] && src[i] != sep)
				i++;
			l_word = i - begin;
			dest[index] = malloc (l_word + 1);
			if (!dest[index])
				return (0);
			ft_strlcpy(dest[index], src + begin, l_word + 1);
			index++;
		}
	}
	return (0);
}

char	**ft_split(char const *str, char sep)
{
	char	**matrix;
	char	*tstr;
	int		s_len;
	int		me_me_split;

	tstr = (char *)str;
	s_len = count_words(tstr, sep);
	matrix = (char **)malloc(sizeof(char *) * (s_len + 1));
	me_me_split = splitter(matrix, tstr, sep);
	if (!matrix)
		return (NULL);
	if (me_me_split != '\0')
	{
		while (me_me_split >= 0)
		{
			free(matrix[me_me_split]);
			me_me_split--;
		}
		free(matrix);
		return (NULL);
	}
	matrix[s_len] = NULL;
	return (matrix);
}
/*
int main(int argc, char **argv)
{
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s <string> <separator>\n", argv[0]);
        return 1;
    }
	int	i = 0;
    const char *input = argv[1];
    char sep = argv[2][0]; // Usare il primo carattere di argv[2] come separatore

    char **result = ft_split(input, sep);
    if (!result)
    {
        fprintf(stderr, "Error: Memory allocation failed.\n");
        return 1;
    }

    printf("Split result:\n");
    while (result[i] != NULL)
    {
        printf("[%d]: '%s'\n", i, result[i]);
        free(result[i]); // Liberare ogni stringa allocata
	i++;
    }

    free(result); // Liberare l'array di puntatori

    return 0;
}
*/
