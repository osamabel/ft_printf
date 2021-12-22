/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 19:11:55 by obelkhad          #+#    #+#             */
/*   Updated: 2021/12/22 19:13:13 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	put_number(int n);
int	put_char(char c);
int	ft_printf(const char *str, ...);
int	put_string(char	*str);
int	putnbr_base(unsigned long nbr, char	*base);
int	put_address(unsigned long add);
int	put_number_u(unsigned int n);

#endif