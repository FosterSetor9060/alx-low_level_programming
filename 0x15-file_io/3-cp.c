#include "main.h"


/**
 * main - the entry point always
 * @argc: representents the argument_count
 * @argv: represent the argument_vector
 * Return: 0 on success, error_codes on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (copy_file(file_from, file_to) != 0)
		return (1);

	return (0);
}

/**
 * copy_file - Copy the content of one file to another
 * @file_from: initial path file
 * @file_to: Destination path fOr the file
 * Return: 0 on success, error codes on failure
 */
int copy_file(const char *file_from, const char *file_to)
{
	int source_fd, dest_fd;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	source_fd = open(file_from, O_RDONLY);
	if (source_fd == -1)
		return (error_message(98, file_from, NULL));

	dest_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (dest_fd == -1)
		return (error_message(99, file_to, NULL));

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
			return (error_message(99, file_to, file_from));
	}

	if (bytes_read == -1)
		return (error_message(98, file_from, NULL));

	if (close(source_fd) == -1 || close(dest_fd) == -1)
		return (error_message(100, NULL, NULL));

	return (0);
}

/**
 * error_message - Printing the Error Message to stderr
 * @error_code: code for the error
 * @file1: the first file_name
 * @file2: the second file_name
 * Return: when failed error
 */
int error_message(int error_code, const char *file1, const char *file2)
{
	const char *message;

	switch (error_code)
	{
	case 97:
		message = "Usage: %s file_from file_to\n";
		break;
	case 98:
		message = "Error: Can't read from file %s\n";
		break;
	case 99:
		message = "Error: Can't write to file %s\n";
		break;
	case 100:
		message = "Error: Can't close fd\n";
		break;
	default:
		message = "Unknown error\n";
		break;
	}

	dprintf(STDERR_FILENO, message, argv[0], file1, file2);
	return (error_code);
}

