<P align="center">
<img src="https://github.com/GDARKKINGV/42-project-badges/blob/main/badges/libftm.png" alt="libft"/>
</P>

## ℹ️ This project consists of programming a library in C. Your library will have a bunch of general-purpose functions on which your programs will rely. ℹ️

# These will be the functions you will need to implement in this project.
## These functions serve diverse purposes ranging from character classification to memory manipulation.

## Character Classification Functions:
isalpha: Checks if a character is an alphabet.
isdigit: Checks if a character is a digit.
isalnum: Checks if a character is alphanumeric.
isascii: Checks if a character is an ASCII character.
isprint: Checks if a character is printable.

## String Manipulation Functions:
strlen:  Calculates the length of a string.
memset: Fills a block of memory with a specified value.
bzero: Zeroes out a block of memory.
memcpy: Copies a block of memory from one location to another.
memmove: Copies a block of memory, handling overlaps correctly.
strlcpy: Copies a string into a fixed-size buffer, guaranteeing null-termination.
strlcat: Concatenates a string to the end of another string, guaranteeing null-termination.
toupper: Converts a character to uppercase.
tolower: Converts a character to lowercase.
strchr: Locates the first occurrence of a character in a string.
strrchr: Locates the last occurrence of a character in a string.
strncmp: Compares two strings up to a specified number of characters.
memchr: Locates the first occurrence of a character in a block of memory.
memcmp: Compares two blocks of memory.
strnstr: Finds the first occurrence of a substring in a string, up to a specified length.
atoi: Converts a string to an integer.
calloc: Allocates memory for an array and initializes it to zero.
strdup: Duplicates a string in memory.

## Additional Functions:
ft_substr: Allocates and returns a substring of the string 's'. The substring starts at index 'start' and has a maximum length of 'len'. Returns NULL if memory allocation fails.

ft_strjoin: Allocates and returns a new string formed by concatenating 's1' and 's2'. Returns NULL if memory allocation fails.

ft_strtrim: Trims characters specified in 'set' from both the beginning and end of 's1'. Returns the trimmed string or NULL if memory allocation fails.

ft_split: Splits the string 's' into substrings using the delimiter 'c' and returns an array of new strings. Returns NULL if memory allocation fails.

ft_itoa: Converts the integer 'n' to a string. Returns the string representation of the number or NULL if memory allocation fails.

ft_strmapi: Applies the function 'f' to each character in the string 's', generating a new string with the results. Returns NULL if memory allocation fails.

ft_striteri: Applies the function 'f' to each character in the string 's', passing the index of each character and its address. No return value.

ft_putchar_fd: Writes the character 'c' to the specified file descriptor 'fd'.

ft_putstr_fd: Writes the string 's' to the specified file descriptor 'fd'.

ft_putendl_fd: Writes the string 's' followed by a newline to the specified file descriptor 'fd'.

ft_putnbr_fd: Writes the integer 'n' to the specified file descriptor 'fd'.