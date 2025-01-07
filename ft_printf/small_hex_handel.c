/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_hex_handel.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:17:56 by mel-atti          #+#    #+#             */
/*   Updated: 2023/11/26 16:17:32 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	small_hex_convert(va_list ptr)
{
	char			*symbols;
	char			buffer[50];
	int				i;
	int				counter;
	unsigned int	num;

	symbols = "0123456789abcdef";
	i = 49;
	counter = 0;
	buffer[i] = '\0';
	num = va_arg(ptr, unsigned int);
	if (num == 0)
		counter += write(1, "0", 1);
	while (num != 0)
	{
		buffer[--i] = symbols[num % 16];
		num /= 16;
	}
	while (buffer[i] != '\0')
	{
		write(1, &buffer[i], 1);
		i++;
		counter++;
	}
	return (counter);
}
