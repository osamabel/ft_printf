/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:03:16 by obelkhad          #+#    #+#             */
/*   Updated: 2021/12/22 18:59:48 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i = 0;
	int		len = 0;
	va_list list;
	va_start(list, str);

	while (str[i])
	{	if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				len += put_char(va_arg(list, int));
			else if (str[i] == 'd' || str[i] == 'i')
				len += put_number(va_arg(list, int));
			else if (str[i] == 'u')
				len += put_number_u(va_arg(list, unsigned int));
			else if (str[i] == 's')
				len += put_string(va_arg(list, char *));
			else if (str[i] == 'x')
				len += putnbr_base(va_arg(list, unsigned int),"0123456789abcdef");
			else if (str[i] == 'X')
				len += putnbr_base(va_arg(list, unsigned int),"0123456789ABCDEF");
			else if (str[i] == 'p')
			{
				len += put_string("0x");
				len += putnbr_base(va_arg(list, unsigned long), "0123456789abcdef");
			}
			else if (str[i] == '%')
				len += put_char('%');
			else
				i--;
		}
		else
			len += put_char(str[i]);
		i++;
	}
	va_end(list);
	return (len);
}
