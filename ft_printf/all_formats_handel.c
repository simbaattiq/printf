/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_formats_handel.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:05:09 by mel-atti          #+#    #+#             */
/*   Updated: 2023/11/30 15:01:11 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	all_formats_handel(char format, va_list ptr)
{
	int	count;

	count = 0;
	if (format == '%')
		count += write(1, &format, 1);
	else if (format == 'c')
		count += char_handel(ptr);
	else if (format == 's')
		count += string_handel(ptr);
	else if (format == 'd' || format == 'i')
		count += dec_int_handel(ptr);
	else if (format == 'x' || format == 'X')
	{
		if (format == 'x')
			count += small_hex_convert(ptr);
		else if (format == 'X')
			count += big_hex_convert(ptr);
	}
	else if (format == 'u')
		count += uns_convert(ptr);
	else if (format == 'p')
		count += pointer_hex_convert(ptr);
	else
		count += write(1, &format, 1);
	return (count);
}
