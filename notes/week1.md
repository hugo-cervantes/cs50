# Week 1 - C

## Labs
- 1
- 2
- 3

## Concepts Learned
- Source code --> Compiler --> Machine Code
- 2
- 3

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

C - Escape Sequences
- \n --> new line
- \r --> Go to beginning of line
- \" --> Literal double quote
- \' --> Literal single quote
- \\ --> Literal backslash

cs50 Library - Functions for Input
- _get_char_ --> single character
- _get_double_ --> double precision floating point #
- _get_float_ --> single precision floating point #
- _get_int_ --> Integer
- _get_long_ --> Long integer
- _get_string_ --> String of text 

