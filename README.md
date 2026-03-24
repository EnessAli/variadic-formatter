# Variadic Formatter

A custom implementation of the C `printf` family using variadic arguments (`va_list`), supporting the most commonly used format specifiers with full flag, width, and precision handling.

## Supported Conversions

| Specifier | Description |
|-----------|-------------|
| `%c` | Single character |
| `%s` | String (null-safe) |
| `%p` | Pointer address (hex) |
| `%d` / `%i` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%x` / `%X` | Hexadecimal (lower/upper) |
| `%o` | Octal |
| `%%` | Literal percent sign |

## Flags & Modifiers

| Flag | Description |
|------|-------------|
| `-` | Left-align within width |
| `0` | Zero-pad numbers |
| `+` | Always print sign |
| ` ` | Space before positive numbers |
| `#` | Alternate form (`0x` prefix) |
| `*` | Width/precision from argument |

## Build & Usage

```bash
make
# link libftprintf.a in your project

#include "ft_printf.h"

ft_printf("%-10s | %+05d | %#010x\n", "hello", 42, 255);
// hello      | +0042 | 0x000000ff
```

## Implementation Notes

- Built on top of `libft` for string operations
- Uses recursive digit extraction for integer conversions
- Separate dispatcher for each conversion type
- Returns total number of characters written (like stdlib `printf`)

## Tech Stack

`C` `Variadic Functions` `va_list` `Format Parsing` `Makefile`

