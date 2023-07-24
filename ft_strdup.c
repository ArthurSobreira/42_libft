/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:07:26 by arsobrei          #+#    #+#             */
/*   Updated: 2023/07/21 19:29:58 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *str)
{
	size_t	index;
	char	*new_string;

	new_string = malloc(ft_strlen(str) + 1);
	index = 0;
	if (new_string == NULL)
	{
		return (NULL);
	}
	while (str[index])
	{
		new_string[index] = str[index];
		index++;
	}
	new_string[index] = '\0';
	return (new_string);
}
