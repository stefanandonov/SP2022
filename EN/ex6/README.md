#Task 1

A natural number N is read from SI, followed by N triples for integers (a,b,c). Calculate for each triplet the value

res = 2*min - max/2 + |min-a|,

where min is the minimum number from the triplet and max is the maximum number of the triplet.

On SO print the value res for each of the triplets.


Input:
5 \
5 1 6\
2 -10 6\
5 5 1\
1 5 5\
5 1 5\

Output:
3.00\
-11.00\
3.50\
-0.50\
3.50\


## Task 2

Two integers X and N are read from SI, followed by N natural numbers (all of them larger than 9). For each read number, check whether the number X is a divisor of the number which is constructed by relocating the first digit of the number to the end of the number.

For each read number print YES on the screen if the condition is satisfied, and print NO otherwise.

Example: The number 1234 after the relocation of the first digit to the end of the number will be 2341. The number 10 will be 1, the number 200 will be 2.

Example.
Input
2 2
43
100

Output
YES
NO

An explanation for the example:
X=2, N=2 (the program should read two more natural numbers)
43 -> 34, 2 is divisor of 34 (output: YES)
100 -> 1, 2 is not a divisor of 1 (output: NO)

# Task 3

Three natural numbers are read from the standard input: N, P (P <= 5) and C (C <= 9). Write a program that will print the first number greater than N in which the digit C appears exactly P times.

# Task 4

Metanumber Problem 5 (0 / 0)
Read from SI two integers a and b. Write a program that will print all numbers from a to b (a < b), such as the number created from all the digits from next to the first to the next to last digit in the original number (the digits that will remain if we remove the first and the last digit from the original number), reversed (read from right to left) is divisible with the number created as the sum of the first and the last digit. For single and two digit numbers, the number created from the middle digits is 0, and these numbers are not printed. At the end print out the count of such numbers.

Example. For the number 82675 the number created from the digits from the next to the first up to the next to last digit, reversed is 762, and the sum of the first and the last digit is (8 + 5) = 13. When printing out the numbers, next to each number that is satisfying the condition, print the equation of the condition in the following form:

original_number -> (reversed_middle == (last_digit + first_digit) * quotient)

for example: 291 -> (9 == (1 + 2) * 3) 84575 -> (754 == (5 + 8) * 58)