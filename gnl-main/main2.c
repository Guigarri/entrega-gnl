#include "get_next_line.h"
#include <errno.h>

int main()
{
	const char*	filename = "arch.txt";
	int		fd;
	char		*line;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		perror("EROOR");
		return (1);
	}

	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s\n", line);
		free(line);
	}

	if (line == NULL && errno != 0)
	{
		perror("ERROR");
		close(fd);
		return (1);
	}

	close(fd);
	return (0);

}
