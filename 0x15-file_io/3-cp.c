#include "main.h"

#define BUFFER_SIZE 1024

int open_source_file(const char *file_from)
{
	int source_fd = open(file_from, O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	return source_fd;
}

int open_dest_file(const char *file_to)
{
	int dest_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	return dest_fd;
}

void copy_file_contents(int source_fd, int dest_fd)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			close(source_fd);
			close(dest_fd);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error reading from source file\n");
		close(source_fd);
		close(dest_fd);
		exit(98);
	}
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	const char *file_from = argv[1];
	const char *file_to = argv[2];

	int source_fd = open_source_file(file_from);
	int dest_fd = open_dest_file(file_to);

	copy_file_contents(source_fd, dest_fd);

	close(source_fd);
	close(dest_fd);

	return 0;
}

