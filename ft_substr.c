/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:20:41 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/06 05:00:33 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*a;
	unsigned int	n;

	if (s == NULL)
		return (NULL);
	i = 0;
	n = ft_strlen(s);
	if (start >= n)
		return (ft_strdup(""));
	if (len > n - start)
		len = n - start;
	a = malloc(len + 1);
	if (!a)
		return (NULL);
	while (i < len)
	{
		a[i] = s[start + i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
// int main()
// {
// 	char a[] = "hello world";
// 	char *s = ft_substr(a, 6, 5);
// 	printf("%s\n", s);
// 	return (0);
// }