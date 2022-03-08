/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchamorr <jchamorr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:51:18 by jchamorr          #+#    #+#             */
/*   Updated: 2022/03/08 18:28:09 by jchamorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int  ft_strlen(const char *string)
{
    int    i;

    i = 0;
    while (string[i])
       i++;
    return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c && *s)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		size;

	size = 0;
	while (s1[size] != '\n')
		size++;
	str = malloc(sizeof(char) * size + 1);
	i = 0;
	while (s1[i] != '\n')
	{
		str[i] = s1[i];
		i++;
	}
    str[i] = '\n';
	str[i + 1] = '\0';
	return (str);
}

char	*ft_strjoin(char *s1, char  *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*str;

	if (!s1)
 	{
 		s1 = malloc(sizeof(char) * 	1);
 		s1[0] = '\0';
 	}
	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		str = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			str[len1] = s2[i];
			len1++;
		}
		str[len1] = '\0';
		return (str);
	}
	return (NULL);
}