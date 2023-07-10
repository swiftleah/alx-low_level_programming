#ifndef MAIN_H
#define MAIN_H

/* Libraries: */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/* Prototypes: */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
