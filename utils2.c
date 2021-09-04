#include "minitalk.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
}

char	*ft_strdup(const char *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		++size;
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	i = -1;
	while (src[++i])
		new[i] = src[i];
	new[i] = '\0';
	return (new);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	checker(const char **str)
{
	int	is_negative;

	while (**str == ' ' || **str == '\t' || **str == '\n'
		|| **str == '\v' || **str == '\f' || **str == '\r')
		(*str)++;
	is_negative = 0;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			is_negative = 1;
		(*str)++;
	}
	return (is_negative);
}

int	ft_atoi(const char *str)
{
	long	nb;
	int		i;
	int		is_negative;

	is_negative = checker(&str);
	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (!is_negative && nb > (unsigned int)MAX_INT)
			return (-1);
		else if (nb > (unsigned int)MIN_INT)
			return (0);
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	if (is_negative)
		return (-nb);
	else
		return (nb);
}
