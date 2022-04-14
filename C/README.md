# C Exploration Notes

Warning: This document is unfinished.

## VSCode

Useful plugins:
- clangd (llvm-vs-code-extensions.vscode-clangd)
- Code Runner (formulahendry.code-runner)

## Compiler
C must be compiled before being executed.

Use the GNU Compiler Collection.

⌨️ `gcc Basic.c`

## Return Codes

Programs should return either a 0 or 1 at the end.

0 = success
1 = error

## Include
Imports another file into the code for usage.
- "Used to include system-defined and user-defined header files"

Ex: `include <stdio.h>` - Includes `printf()` function.

## Data Types

This table will be changed to the new format soon.
| Type           | Description                         | Example                      | Format   | Include        |
| -------------- | ----------------------------------- | ---------------------------- | ------   | -------------- |
| int            | Whole number                        | `int favorite_number = 100;` | d       |                 |
| float          | Number w/6-7 digits                 | `float pi = 3.141592;`       | f       |                 |
| double         | Number w/15-16 digits               | `double pi = 3.1415926535;`  | lf      |                 |
| bool           | Boolean (true or false)             | `bool happy = true;`         | d       | stdbool.h       |

### Character
Name: `char`

About: Single characters or a range of whole numbers.

Format: [c, d](#d-vs-c)

| Usage                                  | Example                                     |
| -------------------------------------  | ------------------------------------------- |
| Single text character                  | `char first_initial = 'M';`                 |
| Whole number (-128 to 127)             | `char age = 17;`                            |
| Whole number (0 to 255)                | `unsigned char eight_bit_max_value = 255;`  |
| Array of characters (acts like String) | `char name[] = "Martin";`                   |

### Interger
Name: `int`
About:
| Usage                                  | Example                                     |
| -------------------------------------  | ------------------------------------------- |

### Short
Name: `short`
About: 
| Usage                                  | Example                                     |
| -------------------------------------  | ------------------------------------------- |

### Floating-Point (Float)
Name: `float`
About: Decimal numbers with 4 bytes (6-7 digits of percision).

### Double
Name: `double`
About:
| Usage                                  | Example                                     |
| -------------------------------------  | ------------------------------------------- |

### Boolean
Name: `bool`
About:
| Usage                                  | Example                                     |
| -------------------------------------  | ------------------------------------------- |


### Unsigned
Increases possible positive number size by not supporting for negative numbers.

### Strings
A string data type **does not** exist in C. However, character arrays can be used in their place.

### Overflow
If a value for a number data type causes an overflow (bigger than it can represent), it will go to lowest amount it can be and then increment the remaining amount.
For example, a char can be -128 to +127, so if it's set `char oops = 130;`, it would output `-126`.

### d vs. c
Format d will print the provided value of the char while format c will print the [ASCII](https://www.ascii-code.com/) value.

### & vs. %
Printf format specifiers are denoted by `%` while scanf format specifiers are denoted by `&`.

## Programs
* [Print](./programs/print.c)
