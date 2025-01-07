/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_int_handel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:47:25 by mel-atti          #+#    #+#             */
/*   Updated: 2023/11/26 14:49:35 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dec_int_handel(va_list ptr)
{
	int		counter;
	int		value;
	char	*str;

	counter = 0;
	value = va_arg(ptr, int);
	str = ft_itoa(value);
	write(1, str, ft_strlen(str));
	counter += ft_strlen(str);
	free(str);
	return (counter);
}
