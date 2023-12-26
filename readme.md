# C course

Made with Brocode `https://www.youtube.com/watch?v=87SH2Cn0s9A`

# Compile on VSCode

Go on `Terminal` then `Configure Default Build Task...`

Click on play or `Ctrl + Alt + N`

# Compile on cmd

Compile the C file with `gcc HiMom.c`

Run the file with `a.exe`

# Code

## Escape sequences

`\n` : New line

`\t` : Tabulation

`\"` / `\'` / `\?` / `\\` : The character next to the backslash

## Data types

* Integer: `int x = 1;` %d

* Float: `float gpa = 3.5;` %f / 4 bytes, 32 bits of precision, 6-7 digits

* Double: `double d = 3.5;` %lf / 8 bytes, 64 bits of precision, 15-16 digits

* Character: `char grade = 'C';` %c

* String: `char name[] = "Anto";` %s

* Boolean: `bool e = true;` %d / 1 byte / To use them write `#include stdbool.h`

## Variables

### Declaration and initialization

`type x;` is the declaration

`x = 3;` is the initialization

`type x = 3` are the both

### Print a variable

`printf("Text is %s.", text)`

[See data types for the %x](#data-types "Goto data-types")