0x0C. C - More malloc, free

Automatic and dynamic allocation are two ways to allocate memory in C programming language.

Automatic allocation is done by declaring variables inside a function or block. The memory for these variables is automatically allocated on the stack when the function or block is executed. The memory is automatically deallocated when the function or block exits.

Dynamic allocation, on the other hand, allows you to allocate memory at runtime. This is useful when you don't know the amount of memory needed at compile-time. The two main functions for dynamic allocation are malloc() and calloc(). malloc() allocates a block of memory of a specified size, while calloc() allocates a block of memory and initializes it with zero. To deallocate the memory, you must use the free() function.

Dynamic allocation is more flexible than automatic allocation, but it also requires more management and can lead to memory leaks if not used properly. It is important to carefully manage dynamically allocated memory to avoid bugs and crashes in your program.
