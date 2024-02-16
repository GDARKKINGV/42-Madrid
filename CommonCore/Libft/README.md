<P align="center">
<img src="https://github.com/GDARKKINGV/42-project-badges/blob/main/badges/libftm.png" alt="libft"/>
</P>

# ℹ️ This project consists of programming a library in C. Your library will have a bunch of general-purpose functions on which your programs will rely. ℹ️

## These will be the functions you will need to implement in this project. These functions serve diverse purposes ranging from character classification to memory manipulation.

## Character Classification Functions:
<strong>isalpha:</strong> Checks if a character is an alphabet.

<strong>isdigit:</strong> Checks if a character is a digit.

<strong>isalnum:</strong> Checks if a character is alphanumeric.

<strong>isascii:</strong> Checks if a character is an ASCII character.

<strong>isprint:</strong> Checks if a character is printable.

## String Manipulation Functions:
<strong>strlen:</strong>  Calculates the length of a string.

<strong>memset:</strong> Fills a block of memory with a specified value.

<strong>bzero:</strong> Zeroes out a block of memory.

<strong>memcpy:</strong> Copies a block of memory from one location to another.

<strong>memmove:</strong> Copies a block of memory, handling overlaps correctly.

<strong>strlcpy:</strong> Copies a string into a fixed-size buffer, guaranteeing null-termination.

<strong>strlcat:</strong> Concatenates a string to the end of another string, guaranteeing null-termination.

<strong>toupper:</strong> Converts a character to uppercase.

<strong>tolower:</strong> Converts a character to lowercase.

<strong>strchr:</strong> Locates the first occurrence of a character in a string.

<strong>strrchr:</strong> Locates the last occurrence of a character in a string.

<strong>strncmp:</strong> Compares two strings up to a specified number of characters.

<strong>memchr:</strong> Locates the first occurrence of a character in a block of memory.

<strong>memcmp:</strong> Compares two blocks of memory.

<strong>strnstr:</strong> Finds the first occurrence of a substring in a string, up to a specified length.

<strong>atoi:</strong> Converts a string to an integer.

<strong>calloc:</strong> Allocates memory for an array and initializes it to zero.

<strong>strdup:</strong> Duplicates a string in memory.

## Additional Functions:
<strong>ft_substr:</strong> Allocates and returns a substring of the string 's'. The substring starts at index 'start' and has a maximum length of 'len'. Returns NULL if memory allocation fails.

<strong>ft_strjoin:</strong> Allocates and returns a new string formed by concatenating 's1' and 's2'. Returns NULL if memory allocation fails.

<strong>ft_strtrim:</strong> Trims characters specified in 'set' from both the beginning and end of 's1'. Returns the trimmed string or NULL if memory allocation fails.

<strong>ft_split:</strong> Splits the string 's' into substrings using the delimiter 'c' and returns an array of new strings. Returns NULL if memory allocation fails.

<strong>ft_itoa:</strong> Converts the integer 'n' to a string. Returns the string representation of the number or NULL if memory allocation fails.

<strong>ft_strmapi:</strong> Applies the function 'f' to each character in the string 's', generating a new string with the results. Returns NULL if memory allocation fails.

<strong>ft_striteri:</strong> Applies the function 'f' to each character in the string 's', passing the index of each character and its address. No return value.

<strong>ft_putchar_fd:</strong> Writes the character 'c' to the specified file descriptor 'fd'.

<strong>ft_putstr_fd:</strong> Writes the string 's' to the specified file descriptor 'fd'.

<strong>ft_putendl_fd:</strong> Writes the string 's' followed by a newline to the specified file descriptor 'fd'.

<strong>ft_putnbr_fd:</strong> Writes the integer 'n' to the specified file descriptor 'fd'.