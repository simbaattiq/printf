/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:33:42 by mel-atti          #+#    #+#             */
/*   Updated: 2023/11/30 15:10:42 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa(int n)
{
	char	*ntos;
	int		length;
	long	nbr;

	nbr = n;
	length = num_len(nbr);
	ntos = (char *) malloc(length + 1);
	if (!ntos)
		return (NULL);
	ntos[length--] = '\0';
	if (nbr == 0)
		ntos[0] = '0';
	if (nbr < 0)
	{
		ntos[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		ntos[length] = 48 + (nbr % 10);
		nbr /= 10;
		length--;
	}
	return (ntos);
}
