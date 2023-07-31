/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wip_ft_putendl_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:41:23 by marvin            #+#    #+#             */
/*   Updated: 2023/07/31 13:41:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// Change this header !!

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	index;

	index = 0;
	while (s[index] != '\0')
	{
		ft_putchar_fd(s[index], fd);
		index++;
	}
	ft_putchar_fd('\n', fd);
}