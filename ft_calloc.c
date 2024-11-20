/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:17:02 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/12 22:39:40 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	char	*arr;

	total_size = nmemb * size;
	arr = malloc(total_size);
	if (!arr)
		return (NULL);
	ft_memset(arr, 0, total_size);
	return (arr);
}

// zero here is the number of elment
// and its type size;
// #include <stdio.h>
// int main()
// {
// 	char *a = "hello world";
// 	a = ft_calloc(2 , 1);
// 	int i;
// 	i = 0;
// 	while(i <= 10)
// 	{
// 		printf("%d\n", a[i]);
// 	i++;
// 	}
// 	return (0);
// }