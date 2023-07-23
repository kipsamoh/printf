0x11. C - printf
This is a group collaboration project between castro owusu and Daniel chebet who are students of Software Engineering.
the printf project imitates the actual printf in c programming within the stdio library. the function prints formated output with its prototype being as follows

int _printf(const char *format, ...)
where format is the output string and since the function is variadic in nature, it will take n number of arguments that are replaced by  n tags.
the tag prototype is written as below
%[flags][length]specifier
flag means either the length(size of output) is left justified, rigth justified, filled with space or 0 or other symbols, positive sign.
the specifier is the type of output i.e string, interger, octal, hexadecimal,float, etc.

the project is divided into the below questions

0. Write a function that produces output according to a format
Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%


1. Handle the following conversion specifiers:

d
i


2. Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary


3. Handle the following conversion specifiers:

u
o
x
X


4. Use a local buffer of 1024 chars in order to call write as little as possible.


5. Handle the following custom conversion specifier:

S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)



6. Handle the following conversion specifier: p.


7. Handle the following flag characters for non-custom conversion specifiers:

+
space
#


8. Handle the following length modifiers for non-custom conversion specifiers:

l
h
Conversion specifiers to handle: d, i, u, o, x, X


9. Handle the field width for non-custom conversion specifiers.


10. Handle the precision for non-custom conversion specifiers.


11. Handle the 0 flag character for non-custom conversion specifiers.


12. Handle the - flag character for non-custom conversion specifiers.


13. Handle the following custom conversion specifier:

r : prints the reversed string


14. Handle the following custom conversion specifier:

R: prints the rot13'ed string



15. All the above options work well together.


authors:
Castro Owusu
Daniel chebet
