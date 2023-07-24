/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:11:34 by arsobrei          #+#    #+#             */
/*   Updated: 2023/07/24 19:41:53 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *number)
{
	size_t	i;
	int		result;
	int		is_negative;

	i = 0;
	result = 0;
	is_negative = 1;
	while (((number[i] >= 9) && (number[i] <= 13)) || ((number[i]) == 32))
	{
		i++;
	}
	if ((number[i] == '-') || (number[i] == '+'))
	{
		if ((number[i] == '-'))
			is_negative *= -1;
		i++;
	}
	while (ft_isdigit(number[i]))
	{
		result *= 10;
		result += number[i] - '0';
		i++;
	}
	return (result * is_negative);
}
