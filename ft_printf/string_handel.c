/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_handel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:13:07 by mel-atti          #+#    #+#             */
/*   Updated: 2023/11/26 14:17:02 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	string_handel(va_list ptr)
{
	int		counter;
	char	*str;

	counter = 0;
	str = va_arg(ptr, char *);
	if (str == NULL)
		str = "(null)";
	write(1, str, ft_strlen(str));
	counter += ft_strlen(str);
	return (counter);
}
