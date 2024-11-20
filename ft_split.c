/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:19:38 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/08 09:14:02 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_w_counter(char const *s, char c)
{
	int	i;
	int	k;
	int	counter;

	i = 0;
	k = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			k = 0;
		}
		else
		{
			if (k == 0)
				counter++;
			k = 1;
		}
		i++;
	}
	return (counter);
}

static void	*ft_freesplit(char **a)
{
	int	i;

	i = 0;
	if (!a)
		return (NULL);
	while (a[i])
		free(a[i++]);
	free(a);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;

	int (i), (k), (start);
	if (!s)
		return (NULL);
	splitted = malloc((ft_w_counter(s, c) + 1) * sizeof(char *));
	if (!splitted)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			splitted[k++] = ft_substr(s, start, i - start);
		if (!splitted)
			ft_freesplit(splitted);
	}
	splitted[k] = NULL;
	return (splitted);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char s[] = "hello world";
// 	// char *str = NULL;
// 	char **splitted = ft_split(NULL, ' ');
// 	if (splitted == NULL)
// 		printf("nadi");
// 	else
// 		printf("%s\n", splitted[0]);
// 	return (0);
// }