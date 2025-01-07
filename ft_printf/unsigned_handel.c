/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_handel.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:09:42 by mel-atti          #+#    #+#             */
/*   Updated: 2023/11/26 18:51:21 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	uns_convert(va_list ptr)
{
	unsigned int	value;
	int				count;
	char			*str;

	value = va_arg(ptr, unsigned int);
	count = 0;
	str = ft_itoa_unsigned(value);
	write(1, str, ft_strlen(str));
	count += ft_strlen(str);
	free(str);
	return (count);
}
