#ifndef MINITALK_H
# define MINITALK_H

# include <sys/types.h>
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>
# include <stdio.h>

# define MIN_INT -2147483648
# define MAX_INT 2147483647
# define ANSI_COLOR_RED	"\x1b[31m"
# define ANSI_COLOR_BLUE	"\x1b[34m"
# define ANSI_COLOR_GREEN	"\x1b[32m"
# define ANSI_COLOR_YELLOW	"\x1b[33m"
# define ANSI_COLOR_RESET	"\x1b[0m"

void	ft_putstr_color_fd(char *color, char *s, int fd);
char	*ft_straddc(char *str, char c);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *src);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_atoi(const char *str);
int		ft_str_isnumeric(char *str);
int		ft_isdigit(int c);

#endif