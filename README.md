# libft

libft is a small C library containing a few standard functions.

## General Instructions

- Create ft in order you believe makes most sense.
- Project must follow the Norm.
- Functions should not quit unexpectedly (segmentation fault, bus error, double
free, etc) apart from undefined behaviors.
- Heap allocated memory must be properly freed when necessary.
- Must submit a file named author containing your username followed by a ’\n’
at the root of your repository.
- Must submit a C file for each function 
  - as well as a libft.h file, which will contain necessary prototypes 
  - as well as macros and typedefs
  - all files must be at the root of repository.
- Submit a Makefile which will compile source files to a static library libft.a.
- Makefile must contain rules $(NAME), all, clean, fclean and re.
- Makefile must compile your work with the flags -Wall, -Wextra and -Werror.
- Allowed `libc` functions: malloc(3), free(3) and write(2). !!Restricted usage.
  - Must include necessary `include` system files to use one or more of the 
  three authorized functions in your `.c` files.
  - Only additional system `include` file allowed to be  used is `string.h` 
  to have access to the constant NULL and to the type `size_t`.
  - Everything else if forbidden.
- create test programs for your library, optionally

## Mandatory

- Your libft.h file can contain macros and typedefs if needed.
- A string must *ALWAYS* end with a `\0`
- It is forbidden to use global variables.
- If you need sub-functions to write a complex function, you must define these 
sub functions as `static` as stipulated in the Norm.
- Must pay attention to types and wisely use `casts` when needed, especially 
when a `void*` type is involved. Generally speaking, avoid implicit casts.

## TODO

 - [x] omemset
 - [x] bzero
 - [x] memcpy
 - [x] memccpy
 - [x] memmove
 - [x] memchr
 - [x] memcmp
 - [x] strlen
 - [x] strdup
 - [x] strcpy
 - [x] strncpy
 - [x] strcat
 - [x] strncat
 - [x] strlcat
 - [x] strchr
 - [ ] strrchr
 - [ ] strstr
 - [ ] strnstr
 - [ ] strcmp
 - [ ] strncmp
 - [ ] atoi
 - [ ] isalpha
 - [ ] isdigit
 - [ ] isalnum
 - [ ] isascii
 - [ ] isprint
 - [ ] toupper
 - [ ] tolower
