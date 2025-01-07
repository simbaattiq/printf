/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_handel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:34:01 by mel-atti          #+#    #+#             */
/*   Updated: 2023/11/26 16:16:49 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pointer_hex_convert(va_list ptr)
{
	char					*symbols;
	char					buffer[50];
	int						i;
	int						counter;
	unsigned long long int	num;

	symbols = "0123456789abcdef";
	i = 49;
	counter = 0;
	buffer[i] = '\0';
	num = va_arg(ptr, unsigned long long int);
	counter += write(1, "0x", 2);
	if (num == 0)
		counter += write(1, "0", 1);
	while (num != 0)
	{
		buffer[--i] = symbols[num % 16];
		num /= 16;
	}
	while (buffer[i] != '\0')
		counter += write(1, &buffer[i++], 1);
	return (counter);
}
