/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-atti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:23:29 by mel-atti          #+#    #+#             */
/*   Updated: 2023/12/01 18:50:22 by mel-atti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int		all_formats_handel(char format, va_list ptr);

int		big_hex_convert(va_list ptr);

int		char_handel(va_list ptr);

int		dec_int_handel(va_list ptr);

char	*ft_itoa_unsigned(unsigned int n);

char	*ft_itoa(int n);

size_t	ft_strlen(const char *str);

int		ft_printf(const char *format, ...);

int		num_len(long n);

int		pointer_hex_convert(va_list ptr);

int		small_hex_convert(va_list ptr);

int		string_handel(va_list ptr);

int		uns_convert(va_list ptr);

#endif
