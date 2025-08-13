# Introduction To C Programming 
- C is a widely used portable high level programming language.
- High Level, but also let's you prgram closer to the metal
- Increasingly important for embedded programming.
- Many languages have a C pedigree

## C's Origins
- Originally Developed in 1972 by Dennis Ritchie at Bell Labs
- The original "k&R" C book was the informal language spec(co-authored with B. Kernighan)
- Has had enormous influence on other modern programming languages.

## C Standardization
- "K&R" C
- ANSI C - (aka c89 or c90)
- most portable
- -ansi, -std=c89
- C99
- extends C89/C90. neww data types, variable length arrays.

## C Basics: variable names
- Must begin with a letter or an underscore (_)
- can be followed by any combunation of letters, digits, or underscore
- Cannot be a reserved word

## C: intrinsic data types
- char (character), typically 1 byte, 'a','b','c','2'
- int (integer), typically 4 bytes, 16 (decimal), 020 (octal), 0x10 (hex)
- float (floating point), typically 4 bytes, 0.00225, 2.25e-3
- double (extended precision float), typically 8 bytes

## C: Modifers
- long, long long, short, unsigned, and signed
- long, long long - extended on some systems, can be used with int, double.
- short - takes half space on some systems
- signed/unsigned (int or char)

## sizeof() operator
- C/C++ define a unary operator sizeof
- Can be used to determined the amount of size any intrinsic type.union.or struct takes in bytes

## Standard I/O
- input/output stream consctruct for command line programs.
- common in all Unix and Unix-like systems.
- C has no special syntax for input/outpus.
- C defines a libary of functions that support integration with standard input/output

## getchar()
 - getchar() is used for reading input

## putchar()
- used for writing output
