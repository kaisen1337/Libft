/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:20:09 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/12 22:33:46 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	a_len;
	char			*new_a;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	a_len = ft_strlen(s);
	new_a = malloc(a_len + 1);
	if (!new_a)
		return (NULL);
	while (i < a_len)
	{
		new_a[i] = f(i, s[i]);
		i++;
	}
	new_a[a_len] = '\0';
	return (new_a);
}
