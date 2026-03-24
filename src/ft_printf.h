#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putptr(unsigned long ptr, int i);
int	ft_putnbr(int number);
int	ft_unsigned(unsigned int w);
int	ft_hex(unsigned int d, char w);
int	ft_printf(const char *str, ...);

#endif
