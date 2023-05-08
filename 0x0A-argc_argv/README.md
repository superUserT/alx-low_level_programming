0x0A-argc_argv

This folder contains programs that pertains to arguments to the main.

When a C program is run, it can be passed command-line arguments. These arguments can be used to specify inputs or options for the program. The arguments are passed to the program through two parameters to the main() function: argc and argv.

argc stands for "argument count" and is an integer value that specifies the number of arguments passed to the program.
argv stands for "argument vector" and is an array of strings that contains the actual arguments passed to the program. The first element of the array (argv[0]) is always the name of the program itself, while the remaining elements (argv[1] to argv[argc-1]) are the command-line arguments.
