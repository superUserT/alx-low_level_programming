#include <stdio.h>
#include <"stdlib.h>
#include "main.h"


/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
       char *buffer;
       ssize_t file_descriptor;
       ssize_t writer;
       ssize_t reader;

       file_descriptor = open(filename, O_RDONLY);

       if  (file_descriptor == -1)
       {
	       return (0);
       }
       buffer = malloc(sizeof(char) * letters);
       reader = read(file_descriptor, buffer, letters);
       writer = write (STDOUT_FILENO, buffer, reader);

       free(buffer);
       close(file_descriptor);
       return (writer);
}
