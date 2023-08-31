/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:01:48 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/31 11:56:30 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_index;
	size_t	src_index;
	size_t	length;

	length = ft_strlen(dst) + ft_strlen(src);
	dst_index = ft_strlen(dst);
	src_index = 0;
	if (size > dst_index)
	{
		while ((src[src_index]) && (dst_index < size - 1))
		{
			dst[dst_index] = src[src_index];
			dst_index++;
			src_index++;
		}
		dst[dst_index] = '\0';
		return (length);
	}
	return (ft_strlen(src) + size);
}
