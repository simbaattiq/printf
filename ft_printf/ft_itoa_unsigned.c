/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:14:47 by mel-atti          #+#    #+#             */
/*   Updated: 2023/11/26 15:15:19 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_unsigned(unsigned int n)
{
	char	*ntos;
	int		length;

	length = num_len(n);
	ntos = (char *) malloc(length + 1);
	if (!ntos)
		return (NULL);
	ntos[length--] = '\0';
	if (n == 0)
		ntos[0] = '0';
	while (n > 0)
	{
		ntos[length] = 48 + (n % 10);
		n /= 10;
		length--;
	}
	return (ntos);
}
