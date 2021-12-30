#include "minitalk.h"

int	main(int argc, char **argv)
{
	char *arg;
	
	if (argc != 3)
		ft_putstr_fd("USAGE : ./client [server PID] [array to send]", 1);
	arg = malloc(sizeof(char) * ft_strlen(argv[2]));
	arg = argv[2];
	ft_putstr_fd(arg, 1);
	
}
