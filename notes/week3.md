# Week 3 - Algorithms

## Labs
- 1
- 2
- 3

## Concepts Learned
- Running Time (ex. Asymptotic Notation)
- Structs
- 

## Notes
### Asymptotic Notation (Algorithm Performance as n gets very large)
- _O(n)_ --> **Big O,** efficiency of algorithm (Upper Bound aka WORST CASE)
  - 𝑂⁡(𝑛^2) --> slowest
  - 𝑂⁡(𝑛⁢log⁡𝑛)
  - 𝑂⁡(𝑛) --> Linear Search 
  - 𝑂⁡(log⁡𝑛) --> Binary search
  - 𝑂⁡(1) --> Constant, fastest
- _Omega(n)_ --> Lower Bound (BEST CASE)
- _Theta(n)_ --> Same upper/lower bounds

### Structs
- When comparing strings, use _strcmp_ from <string.h> library.
  - Returns 0 if equal, 1 or -1 if not (based on ASCII position)
- Create own data types using struct.
  - use typedef struct {}
