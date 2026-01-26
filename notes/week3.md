# Week 3 - Algorithms

## Labs
- 1
- 2
- 3

## Concepts Learned
- Running Time (ex. Asymptotic Notation)
- Structs
- Sorting (selection, bubble, merge)
- Recursion

## Notes
### Asymptotic Notation (Algorithm Performance as n gets very large)
- _O(n)_ --> in the order of n --> **Big O,** efficiency of algorithm (Upper Bound aka WORST CASE)
  - 𝑂⁡(𝑛^2) --> slowest
  - 𝑂⁡(𝑛⁢log⁡𝑛)
  - 𝑂⁡(𝑛) --> Linear search 
  - 𝑂⁡(log⁡𝑛) --> Binary search
  - 𝑂⁡(1) --> Constant, fastest
- _Omega(n)_ --> Lower Bound (BEST CASE)
- _Theta(n)_ --> Same upper/lower bounds

### Structs
- When comparing strings, use _strcmp_ from <string.h> library.
  - Returns 0 if equal, 1 or -1 if not (based on ASCII position)
- Create own data types using struct.
  - use typedef struct {}

### Sorting
- **Selection Sort (O(n^2))** --> Iterate through the list, finding the smallest # each time and reordering.
- **Bubble Sort (O(n^2))** --> Repeatedly swap elements to "bubble" larger elements to the end. 
  - More efficient than selection (no swaps = stop), but still taxing.
- **Merge Sort (nlog(n))** --> Sort left half and right half, then merge (comparing same indexes of each half)
  - Fastest

### Recursion
- **Recursion** --> Function calls itself
  - ex. in Mario.c, use n-1 to make base pyramid, then add one more row (to match n).
