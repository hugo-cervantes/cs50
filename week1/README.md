# Week 1 - Problem Set 1

## Problem
In the "Mario" program, the goal was to recreate adjacent pyramids of blocks with a height inputted by the user. Meanwhile, the "Credit" program focused on identifying valid credit card numbers (VISA, MasterCard, AMEX) using Luhn's algorithm and loops/conditionals. 

## Concepts
- Inputs/Outputs
- Escape Sequences (\n particularly)
- Luhn's Algorithm
  - %10 to get last digit, /10 to remove last digit.
- Loops (while = unknown repetition, for = known repetition)
- Conditionals (if-else statements, nesting)

## Challenges
Something difficult in making these programs, particularly in the "Credit" program, was incorporating Luhn's algorithm, extracting digits, and terminating the loop at the appropriate time. I overcame this by using the modulo operator to extract digits and using a variable to keep track of the length of the card number. Instead of storing each digit, I stored the sum of the digits in a separate variable (that I later used to confirm validity.) 

## Outcome
The Mario program was able to create pyramids with an accurate height (based on user inputs 1-8) and the Credit program was able to identify valid card numbers (w/ lengths of 13, 15, and 16). 
