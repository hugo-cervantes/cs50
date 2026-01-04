# Week 2 - Arrays

## Labs
- 1
- 2
- 3

## Concepts Learned
- Compiling
- Debugging
- Arrays
- Strings
- Command-Line Arguments

## Notes
### Intro to Compiling
- Command Line Arguments --> inputs (arguments) to commands (like ls, make)
- What's inside "make hello":
  - clang -o hello hello.c -lcs50
    - -l --> link extra libraries

### Steps of Compiling
- **Pre-processing** --> Anything w/ "#" sign gets preprocessed in code.
  - ex. #include <stdio.h> --> includes print function prototype. 
- **Compiling:** Source Code --> Assembly Code
- **Assembling:** Assembly Code --> Machine Code
- **Linkning:** Code from included libraries --> converted to Machine Code --> Combined with your code

### Debugging Techniques
- Use _printf_ to see what code is doing.
- **Breakpoint** --> Placeable red dot (left of code in gutters) where code terminates.
- **debug50** --> Representative of VS Code's debugger

### Arrays
- **Array:** Sequence of values stored back-to-back in memory.
- Use [] to specify array parameter.
- Use arrays AND loops for efficiency.
- Constant (_const_ before data type) to lock in variable value.
  - Usually CAPITAL letter variables. 
- Average function --> _average(int length, int array[]);_
- First [] for string (word), second [] for character (in 2 words example). 

### Strings 
- **String:** An array of variables of type char (aka array of characters)
  - "\0" (aka "Nul") always proceeds last character in string (to end printing).
- String Library --> _<string.h>_
  - Finding Length --> Loop while n != '\0' --> use _strlen(string s);_
- Classify/Manipulate Characters --> _<ctype.h>_ library
  - Converting to Uppercase --> For loop through string, if character = lowercase (c >= a && c     <= z) then convert (-32) --> use _toupper(char c);_
 
### Command-Line Arguments
- Arguments passed down to program at command line.
- Taking arguments BEFORE program runs --> _int main(int argc, string argv[])_
  - argc --> Argument count
  - argv[] --> Array of characters passed
  - FIRST argument (0) = name of file

### Exit Status
- When checking success/failure, use _echo $?_
  - Usually, 0 = success & 1 = failure (or any other #)

### Cryptography
- Art of ciphering & deciphering a message.
- Plaintext + Key --> Cipher --> Ciphertext
