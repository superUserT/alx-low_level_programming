#include <stdio.h>
#include <"stdlib.h>
#include "main.h"

/**
 * read_textfile - Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
       char *buffer;
       ssize_t file_desc;
       ssize_t writer;
       ssize_t reader;

       file_desc = open(filename, O_RDONLY);

       if  (file_desc == -1)
       {
	       return (0);
       }
       buffer = malloc(sizeof(char) * letters);
       reader = read(file_desc, buffer, letters);
       writer = write (STDOUT_FILENO, buffer, reader);

       free(buffer);
       close(file_desc);
       return (writer);
}
