/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:19:56 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/12 22:22:46 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	dest_len = ft_strlen(dst);
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	k = 0;
	while (src[k] && i < size - 1)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (dest_len + src_len);
}
// size is the size of dst
// int main()
// {
//     char s[] = "1337 world";
// 	char a []= "hello";

//     printf("########\n%ld",ft_strlcat(a, s, 10));
//     printf("\n########");
//     return (0);
// }