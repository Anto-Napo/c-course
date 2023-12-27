# C course

Made with Brocode [here](https://www.youtube.com/watch?v=87SH2Cn0s9A "Named link title")

# Compile

## Install compiler

Download from [Winlibs](https://winlibs.com/ "Named link title")

## Compile on VSCode

Go on `Terminal` then `Configure Default Build Task...`

Click on play or `Ctrl + Alt + N`

## Compile on cmd

Compile the C file with `gcc HiMom.c`

Run the file with `a.exe`

# Code

## Escape sequences

`\n` : New line

`\t` : Tabulation

`\"` / `\'` / `\?` / `\\` : The character next to the backslash

## Data types

For numbers types, use `unsigned type = 10;` to disregard negative numbers and double the range

* Integer: `int x = 1;` %d or %u for unsigned / 4 bytes, -2,147,483,647 to +2,147,483,647 (Integers use `long int`)

* Long: `long long int = 2;` %lld or %llu for unsigned / 8 bytes 9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 / for unsigned write `U` at the end of the number

* Short integer: `short int e = 2;` %d / 2 bytes -32,768 to +32,767

* Ascii or short number: `char f = 100;` %c or %d / 1 byte -128 to +127

* Float: `float gpa = 3.5;` %f / 4 bytes, 32 bits of precision, 6-7 digits

* Double: `double d = 3.5;` %lf / 8 bytes, 64 bits of precision, 15-16 digits

* Character: `char grade = 'C';` %c

* String: `char name[] = "Anto";` %s

* Boolean: `bool e = true;` %d (log 1 or 0) / 1 byte / To use them write `#include stdbool.h`


## Variables

### Declaration and initialization

`type x;` is the declaration

`x = 3;` is the initialization

`type x = 3` are the both

### Format specifiers to print a variable

* %c = character

* %s = string

* %f = float

* %lf = double

* %d = integer

To write before the specifier:

* %.1 = decimal precision

* %1 = min field with (align to write)

* %-1 = same (align to right)

[See data types for the %x](#data-types "Goto data-types")