# Week 2 - Arrays

## Labs
- 1
- 2
- 3

## Concepts Learned
- Compiling
- Debugging
- 3

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
- debug50 --> Representative of VS Code's debugger
