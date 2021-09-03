#include "minitalk.h"

t_mini	*get_mini()
{
	static t_mini	statique;
	return (&statique);
}

int	init_statique()
{
	t_mini *minitalk;

	minitalk = get_mini();
	minitalk->character = 0;
	minitalk->len = ;
	minitalk->pos_in_char = 0;
	minitalk->string = ft_calloc(1, sizeof(char));
	if (minitalk->string == NULL)
		return (-1);
	minitalk->string[0] = '\0';
}