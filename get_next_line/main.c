#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int	main()
{
	int fd;

	int i = 0;

	fd = open("texte.txt", O_RDONLY);
	while(i != 5)
	{
		printf("%s", get_next_line(fd));
		i++;
	}
}
