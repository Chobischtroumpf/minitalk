#include "minitalk.h"

int	handle(int signal)
{
	t_mini *minitalk;

	if ()
	minitalk = get_mini();
	if (minitalk->pos_in_char == 8)
	{
		int new_len = ft_strlen(minitalk->string) + 1;
		char *tmp;
		tmp = ft_calloc(sizeof(char), new_len + 1);
		ft_strcpy(tmp, minitalk->string);
		ft_strncat(tmp, (char)&minitalk->character, 1);
		free(minitalk->string);
		minitalk->string = tmp;
		minitalk->pos_in_char = 0;
		minitalk->len = new_len;
	}
	else
	{
		if (signal == SIGUSR1)
			minitalk->character ^= 0x80 >> minitalk->pos_in_char;
		else if (signal == SIGUSR2)
			minitalk->character |= 0x80 >> minitalk->pos_in_char;
		minitalk->pos_in_char++;
	}
}

int	end_func(int signal)
{

}

int main()
{
	if (init_statique())
		return (ft_printf());
	ft_printf("server id : %d\n", getpid());
	signal(SIGUSR1, handle);
	signal(SIGUSR2, handle);
	signal(SIGINT, end_func);
	while(1)
		pause();
}