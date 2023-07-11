#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
