/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:25:27 by arsobrei          #+#    #+#             */
/*   Updated: 2023/07/25 14:07:04 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allocated_mem;
	size_t	full_size;

	full_size = nmemb * size;
	allocated_mem = (void *)malloc(full_size);
	if (allocated_mem == NULL)
	{
		return (NULL);
	}
	ft_bzero(allocated_mem, full_size);
	return (allocated_mem);
}
