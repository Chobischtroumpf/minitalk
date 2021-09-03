#ifndef MINITALK_H
# define MINITALK

# include "libft.h"
# include <sys/types.h>
# include <unistd.h>
# include <signal.h>

typedef struct s_mini
{
	short	character;
	short	pos_in_char;
	int		len;
	char	*string;
}	t_mini;

t_mini	*get_mini();
int	init_statique();

#endif