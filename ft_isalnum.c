/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:28:25 by arsobrei          #+#    #+#             */
/*   Updated: 2023/07/21 16:01:40 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int value)
{
	if (ft_isalpha(value))
	{
		return (1);
	}
	else if (ft_isdigit(value))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
