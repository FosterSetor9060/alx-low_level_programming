#ifndef MAIN_H
#define MAIN_H
/*
 * File: alx.h
 * Auth: Foster setor
 * Desc: Header file with prototypes functioning
 *       written
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 1024
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);

#endif
