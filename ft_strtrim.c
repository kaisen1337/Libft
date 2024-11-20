/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:20:29 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/12 22:30:34 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, char const *set)
{
	int		start;
	int		end;
	char	*a;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (*s1 && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (end > start && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	a = ft_substr(s1, start, end - start);
	return (a);
}
