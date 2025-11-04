#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		i;
	int		fd;
	char	*line;

	if (argc < 2)
	{
		printf("Use it like this: %s <file1> <file2> ...\n", argv[0]);
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd < 0)
		{
			perror("Error opening file");
			i++;
			continue;
		}
		printf("||===> %s <===||\n", argv[i]);
		while ((line = get_next_line(fd)))
		{
			printf("%s", line);
			free(line);
		}
		printf("\n");
		close(fd);
		i++;
	}
	return (0);
}

