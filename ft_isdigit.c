/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:17:43 by arsobrei          #+#    #+#             */
/*   Updated: 2023/07/19 11:19:42 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int value)
{
	if ((value >= '0') && (value <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}