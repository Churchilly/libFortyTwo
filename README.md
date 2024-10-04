# Libft

Libft is a custom implementation of some standard C library functions, as well as additional utility functions. This project is designed to help you understand and implement common C functions from scratch.

## Table of Contents

- [LIBC Functions](#libc-functions)
  - [ft_isalpha](#ft_isalpha)
  - [ft_isdigit](#ft_isdigit)
  - [ft_isalnum](#ft_isalnum)
  - [ft_isascii](#ft_isascii)
  - [ft_isprint](#ft_isprint)
  - [ft_toupper](#ft_toupper)
  - [ft_tolower](#ft_tolower)
  - [ft_atoi](#ft_atoi)
  - [ft_strncmp](#ft_strncmp)
  - [ft_memcmp](#ft_memcmp)
  - [ft_strlen](#ft_strlen)
  - [ft_strlcpy](#ft_strlcpy)
  - [ft_strlcat](#ft_strlcat)
  - [ft_memset](#ft_memset)
  - [ft_bzero](#ft_bzero)
  - [ft_memcpy](#ft_memcpy)
  - [ft_memmove](#ft_memmove)
  - [ft_memchr](#ft_memchr)
  - [ft_calloc](#ft_calloc)
  - [strchr](#strchr)
  - [strrchr](#strrchr)
  - [strnstr](#strnstr)
  - [strdup](#strdup)
- [ADDITIONAL Functions](#additional-functions)
  - [ft_substr](#ft_substr)

## LIBC Functions

### ft_isalpha
	** Description **
	Checks if the given character is an alphabetic letter.

	** Prototype **
	     ```bash
	     man isalpha
	     ```

	** Notes **
	- Why it uses type int instead of char?
    	- The C standard library functions for character classification (like isalpha, isdigit, etc.) use int for their parameters. This consistency ensures that these functions can be used interchangeably and handle the full range of unsigned char values as well as EOF.

### ft_isdigit
	** Description **
	Checks if the given character is a digit (0-9).

	** Prototype **
		```bash
		man isdigit
		```

	** Notes **
	- Why it uses type int instead of char?
		- The C standard library functions for character classification (like isdigit, isalpha, etc.) use int for their parameters. This consistency ensures that these functions can be used interchangeably and handle the full range of unsigned char values as well as EOF.


### ft_isalnum
	**Description**  
	Checks if the given character is an alphanumeric character (letter or digit).

	**Prototype**  
	```bash
	man isalnum
	```

	**Notes**  
	- Why it uses type int instead of char?  
		- The C standard library functions for character classification (like isalnum, isalpha, etc.) use int for their parameters. This consistency ensures that these functions can be used interchangeably and handle the full range of unsigned char values as well as EOF.

### ft_isascii
	**Description**  
	Checks if the given character is an ASCII character (0-127).

	**Prototype**  
	```bash
	man isascii
	```

	**Notes**  
	- Why it uses type int instead of char?  
		- The C standard library functions for character classification (like isascii, isalpha, etc.) use int for their parameters. This consistency ensures that these functions can be used interchangeably and handle the full range of unsigned char values as well as EOF.

### ft_isprint
	**Description**  
	Checks if the given character is a printable character, including space (32-126).

	**Prototype**  
	```bash
	man isprint
	```

	**Notes**  
	- Why it uses type int instead of char?  
		- The C standard library functions for character classification (like isprint, isalpha, etc.) use int for their parameters. This consistency ensures that these functions can be used interchangeably and handle the full range of unsigned char values as well as EOF.

### ft_toupper
	**Description**  
	Converts a lowercase letter to its uppercase equivalent.

	**Prototype**  
	```bash
	man toupper
	```

	**Notes**  
	- Why it uses type int instead of char?  
		- The C standard library functions for character classification (like toupper, tolower, etc.) use int for their parameters. This consistency ensures that these functions can be used interchangeably and handle the full range of unsigned char values as well as EOF.

### ft_tolower

	**Description**  
	Converts an uppercase letter to its lowercase equivalent.

	**Prototype**  
	```bash
	man tolower
	```

	**Notes**  
	- Why it uses type int instead of char?  
		- The C standard library functions for character classification (like tolower, toupper, etc.) use int for their parameters. This consistency ensures that these functions can be used interchangeably and handle the full range of unsigned char values as well as EOF.

### ft_atoi
	**Description**
	Converts the initial portion of the string pointed to by str to int.

	**Prototype**
	```bash
	man atoi
	```

	**Notes**
	- Handling overflow by returning INT_MAX or INT_MIN if the value exceeds the range of an int.
	-
