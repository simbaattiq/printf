/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:51:43 by mel-atti          #+#    #+#             */
/*   Updated: 2023/11/30 15:02:53 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		char_count;
	va_list	ptr;

	va_start (ptr, format);
	char_count = 0;
	while (*format)
	{
		if (*format != '%')
			char_count += write(1, format, 1);
		else
		{
			format++;
			if (*format == '\0')
				break ;
			else
				char_count += all_formats_handel(*format, ptr);
		}
		format++;
	}
	va_end(ptr);
	return (char_count);
}
