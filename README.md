# Libft — Custom C Standard Library Implementation

A robust, self-built collection of fundamental C library functions designed to replace standard library equivalents. While C provides built-in utilities, many suffer from design flaws that lead to undefined behavior or buffer overflows. This library focuses heavily on **enhancing safety boundaries**, stabilizing edge cases, and delivering a cleaner interface for daily development.

This library forms the low-level backbone for more complex system programming, shell development, and networking projects.

---

## ✨ Key Features
* **Enhanced Safety Boundaries:** Strict handling of pointer boundaries, buffer protections, and explicit overflow checks (`SIZE_MAX` validation, secure memory replication).
* **Zero Dependency:** Written strictly in standard C, building entirely from the ground up.
* **Memory Tracking Mindset:** Standardized usage of secure allocation with automated sanitization steps.

---

## 🛠️ Installation & Compilation

The library compiles into a static library archive file (`libft.a`) using the provided `Makefile`.

### Available Rules:
* `make` or `make all` — Compiles the core library objects and bundles them into `libft.a`.
* `make bonus` — Includes linked-list utility structures into the compilation.
* `make clean` — Removes intermediary object files (`.o`).
* `make fclean` — Deletes all object files as well as the generated `libft.a` binary.
* `make re` — Triggers a full clean and re-compilation.

```bash
# Clone and enter the repository
git clone https://github.com/chienjuyang/Libft.git libft
cd libft

# Compile the library
make

# Include it in your separate C project compilation
cc main.c -L. -lft -I.
```


## 🛡️ Enhanced String & Memory Safety Boundaries
These functions rewrite the classical string handlers to eliminate buffer errors and handle cross-overlapping memory regions securely.

* **`ft_strlen`** Calculates the exact length of a constant character string up to (but excluding) the terminating null character.
* **`ft_strlcpy`** Copies up to `size - 1` characters from the source string to the destination buffer, safely null-terminating the result. Prevents buffer truncation errors common to `strcpy`.
* **`ft_strlcat`** Appends the source string to the end of the destination buffer up to `size - 1` total characters. Guarantees null-termination, avoiding classical boundary overflows seen in `strcat`.
* **`ft_strchr`** Searches for the first occurrence of a character within a string. Returns a clean pointer to the located byte or `NULL` if unfound.
* **`ft_strrchr`** Searches for the last occurrence of a character within a string. Returns a clean pointer to the located byte or `NULL` if unfound.
* **`ft_strnstr`** Locates a substring within a larger string, bounded safely by a maximum search length constraint to prevent memory leakage out of array scope.
* **`ft_strncmp`** Lexicographically compares two character strings up to a maximum of `n` bytes.

## 🧠 Pure Memory Engineering
Low-level block manipulation functions built with validation protocols.

* **`ft_memset`** Fills the initial `n` bytes of a targeted memory space with a specified constant byte value.
* **`ft_bzero`** Erases data by overwriting `n` bytes of a targeted memory reference with zeroes (`\0`).
* **`ft_memcpy`** Copies `n` bytes from a source memory area to a destination area. Explicitly guards boundaries by checking for mutual pointer nullability.
* **`ft_memmove`** Safely copies `n` bytes between memory blocks. Converts overlap logic intelligently to assess whether source and destination regions conflict, processing backwards or forwards to prevent data corruption.
* **`ft_memchr`** Scans an array of memory across `n` bytes to find the initial match of a specific byte character.
* **`ft_memcmp`** Compares two arbitrary blocks of memory byte-by-byte up to `n` units.

## 🧪 Character Invalidation & Testing
Strict type and boundary evaluation tools mapping matching ASCII subsets.

* **`ft_isalpha`** Assesses if a character is strictly alphabetic (`A-Z` or `a-z`).
* **`ft_isdigit`** Assesses if a character is a base-10 numerical digit (`0-9`).
* **`ft_isalnum`** Assesses if a character is alphanumeric (combination of digits or letters).
* **`ft_isascii`** Validates whether a character fits securely into the standard 7-bit ASCII boundaries (values `0` through `127`).
* **`ft_isprint`** Validates whether a character is printable, excluding control sequences (values `32` through `126`).
* **`ft_toupper`** Transforms a lowercase character counterpart to uppercase.
* **`ft_tolower`** Transforms an uppercase character counterpart to lowercase.


## 🎛️ Allocation, Slicing & Parsing Utilities
Higher-level abstract data management with explicit validation of memory parameters.

* **`ft_calloc`** Dynamically allocates continuous memory blocks for multiple elements, checking explicitly for multiplication overflow bounds via `SIZE_MAX` before initializing the whole space safely to zero.
* **`ft_strdup`** Duplicates a string by allocating exact memory space dynamically, safeguarding against buffer mismatches.
* **`ft_substr`** Extracts an isolated substring from a given string starting from a set index up to a defined length parameter. Includes strict out-of-bounds start location validation.
* **`ft_strjoin`** Allocates dynamic space to smoothly merge two independent strings into a unified new string entity.
* **`ft_strtrim`** Trims a specified set of characters from both the start and trailing end of a target string, returning a clean, optimized copy.
* **`ft_split`** Slices a main string into an array of smaller strings using a specific delimiter character. Features complete internal memory tracking to free up resources cleanly if an allocation error occurs midway.
* **`ft_strmapi` / `ft_striteri`** Applies an external functional mapping protocol sequentially onto every character of a string to generate modified copies or mutations.

## 🔢 Converters & Output Streams
Converts raw data types securely and channels outputs using targeted low-level File Descriptors (`fd`).

* **`ft_atoi`** Converts an ASCII string into an integer value. Includes logic checkpoints to prevent sign duplication anomalies and controls boundary exceptions.
* **`ft_itoa`** Converts an integer into a dynamically allocated null-terminated string, handling minimum bounds smoothly.
* **`ft_utoa` / `ft_utoa_base`** Converts unsigned integers and raw pointers (`uintptr_t`) into string representations, allowing custom base transformations (e.g., hexadecimal representation mapping).
* **`ft_putchar` / `ft_putstr`** Direct unbuffered output helpers writing variables to standard output streams.
* **`ft_putchar_fd` / `ft_putstr_fd` / `ft_putendl_fd` / `ft_putnbr_fd`** Outputs single characters, full strings, line-ended strings, or integers straight to a chosen File Descriptor destination (e.g., standard out, standard error, or specific log files).

### ⛓️ Bonus: Object Linked-List Infrastructure (`t_list`)
A standalone utility package enabling smooth dynamic collection management using pointer-linked node references.

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
