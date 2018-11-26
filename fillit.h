

#include "libft/includes/libft.h"

#ifndef FILIT_H
# define FILIT_H

typedef struct		fil_list
{
	char		**tetrimino;
	unsigned char	id;
	fil_list	*next;
}			f_list;


#endif
