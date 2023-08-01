/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:53:18 by marvin            #+#    #+#             */
/*   Updated: 2023/08/01 10:53:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Change this header !!

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t index;

    index = 0;
    if (s && f)
    {
        while (s[index])
        {
            f(index, &s[index]);
            index++;
        }
    }
}
