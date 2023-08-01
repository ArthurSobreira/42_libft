/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:49:29 by marvin            #+#    #+#             */
/*   Updated: 2023/07/31 15:49:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Change this header !!

#include "libft.h"

static size_t	digits_counter(int number)
{
	int	lenght;

	lenght = 0;
	if (number <= 0)
	{
		lenght++;
	}
	while (number)
	{
		lenght++;
		number = number / 10;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	int		len_number;
	char	*result;
	long	number;

	len_number = digits_counter(n);
	number = n;
	result = malloc((len_number + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (number == 0)
		result[0] = '0';
	if (number < 0)
	{
		result[0] = '-';
		number *= -1;
	}
	result[len_number--] = '\0';
	while (number)
	{
		result[len_number] = (number % 10) + '0';
		len_number--;
		number = number / 10;
	}
	return (result);
}
