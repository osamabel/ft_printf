#ifndef PRINT_HEADER_H
# define PRINT_HEADER_H

#include<stdio.h>
#include <unistd.h>
#include <stdarg.h>
int	put_number(int n);
int	put_char(char	c);
int	ft_printf(const char *str, ...);
int	put_string(char	*str);
int	putnbr_base(unsigned long nbr, char	*base);
int	put_address(unsigned long add);
int	put_number_u(unsigned int n);
#endif