
#include "fillit.h"

f_list		*switch_input_handling(int fd)
{
	int 	i;
	f_list	*handle;
	char	**line;
	int	j;

	i = 0;
	if (!(line = (char**)malloc(sizeof(**line) * 2)))
		return (NULL);
	while ((get_next_line(fd, line)) > 0)
	{
		if (i == 0)
			if (!(handle = (f_list*)malloc(sizeof(*handle))))
				return (NULL);
		line[0] = handle->tetrimino[i];
		free(line[0]);
		i++;
	}
}
