/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_handel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:11:08 by mel-atti          #+#    #+#             */
/*   Updated: 2023/11/26 14:12:18 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	char_handel(va_list ptr)
{
	int		counter;
	char	c;

	counter = 0;
	c = va_arg(ptr, int);
	write(1, &c, 1);
	counter++;
	return (counter);
}
