# Week 1 - C

## Labs
- 1
- 2
- 3

## Concepts Learned
- Source code --> Compiler --> Machine Code
- VS Commands
- Intro to C - General Tips
  - Escape Sequences
  - Libraries
  - Format Codes
  - Conditionals
  - Loops (While, While do, For)

## Notes
Intro
- **Source code** = human-readable text in a specific programming language for computers to run.
- **Machine code** = 0s and 1s, computer converts source code into machine code. 
- **GUI (Graphical User Interface)** --> Visual elements
- **CUI (Command Line Interface)** --> text input/output

VS Commands
- _code hello.c_ --> Creates c file "hello
- _make hello_ --> Automates compilation (converts)
- _./hello_ --> ./ implies something in this folder, run program "hello."
- _ls_ --> List current files in folder
- _clear_ or ctrl+l --> Clear terminal
- _cd_ --> change directory
- _cp_ --> make copy of file/folder
- _mkdir_ --> make directory (new folder)
- _mv_ --> move or rename file/folder 
- _rm_ --> remove
- _rmdir_ --> remove directory

C - Intro
- **Library** = Collection of code someone else wrote for you
  - Access using **Header File** (ex. #include <studio.h>)
- When declaring variable, include RETURN TYPE.
- Don't forget semicolons!
- %s --> Placeholder to indicate corresponding argument = string
  - ex. _printf("hello, %s\n", answer);_
- Strings = "", chars = ''
- ctrl+c to force quit (ex. infinite while loops)
- Include **function prototype** at top (so you can define it later)
- Scope --> variables only exist within {} of functions. 

C - Escape Sequences
- \n --> new line
- \r --> Go to beginning of line
- \" --> Literal double quote
- \' --> Literal single quote
- \\ --> Literal backslash

cs50 Library - Functions for Input
- _get_char_ --> Single character
- _get_double_ --> Double precision floating point # (decimal)
- _get_float_ --> Single precision floating point #
- _get_int_ --> Integer
- _get_long_ --> Long integer
- _get_string_ --> String of text 

C - Format Codes
- _%s_ --> string
- _%c_ --> char
- _%f_ --> float
- _%lf_ --> double
- _%i_ --> integer

C - Conditionals
- ex. _if (x < y) {}_
- Logical operators:
  - || = or
  - && = and

C - WHILE Loops
- ex. 
- _int i = 0;_
- _while (i < 3) {_
  - _printf("meow\n");_
  - _i++;_
_- }_

C - DO WHILE Loops
- ex.
- _int n;_
- _do_
- _{_
  - _n = get_int("Number: ");_
- _}_
- _while (n < 1);_
- _meow(n);_ 

C - FOR Loops
- ex. 
- _int main(void)_
- _{_
  - _for (int i = 0; i < 3; i++)_
  - _{_
    - _meow();_
  - _}_
- _}_ 
