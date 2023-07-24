/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:01:48 by arsobrei          #+#    #+#             */
/*   Updated: 2023/07/20 18:41:31 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_index;
	size_t	src_index;
	size_t	lenght;

	lenght = ft_strlen(dest) + ft_strlen(src);
	dest_index = ft_strlen(dest);
	src_index = 0;
	if (size > dest_index)
	{
		while ((src[src_index]) && (dest_index < size - 1))
		{
			dest[dest_index] = src[src_index];
			dest_index++;
			src_index++;
		}
		dest[dest_index] = '\0';
		return (lenght);
	}
	return (ft_strlen(src) + size);
}
