
#include "fillit.h"

int		main(int argc, char *argv )
{
	int 	fd;
	f_list	handle;

	if (argc < 2)
	{
		ft_putstr("Error: Veuillez passer la liste de Tetriminos en arguments !");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Error : Veuillez ne passer qu\'une seule liste de Tetriminos !");
		return (0);
	}
	fd = open(argv[1]);
	// Il faut la verif du fd ici
	//
	// Switch entre l'input et sur auoi on va le traiter (Enculer pute etc)
	handle = switch_input_handling(fd);



	close(fd);
	return (0);
}
