#include "get_next_line.h"

int main()
{
	const char*	filename = "arch.txt";
	int		fd;
	char		*line;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		printf("EROOR");
		return (1);
	}

	while ((line = get_next_line(fd)) != NULL)
	{
		printf(":%s", line);
		free(line);
	}
	close(fd);
	return (0);

}
