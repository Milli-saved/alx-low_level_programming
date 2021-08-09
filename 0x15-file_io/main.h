#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#define LEN_BUFFER 1024
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>
ssize_t read_textfile(const char *filename, size_t letters);
int crearte_file(const char *filenmae, char *text_constent);
int append_text_to_file(const char *filename, char *text_content);
#endif
