## Task 1 

A whole number x ( 1<=x <=10) is read from SI.

After that, an array of no more than 100 integers is read. First the count n of numbers to follow is given, and then the n numbers.

Write a program that will print in descending order the numbers from the array that contain exactly x unique digits.

The calculation of the count of unique digits for a given number should be performed in a separate function. Solutions without functions will be graded with a maximum of 40% of the points.

Example:
Input:

4
10
99
190
10100
5931
1232
999
1231
9999
1234567
2342421
Output:

2342421
5931

Explanation: from the read numbers, only 5931 and 2342421 have 4 unique digits. These two numbers are printed in descending order.


## Task 2

A text file named “input.txt” is given. The lines in the file contain no more than 100 characters. Write a program that for each line of the file will print information for the number of letters, number of words, and the line itself. Words are considered all combinations of letters and digits separated with space or punctuation marks. The printing format is the following:

b, w: row

Where b is the count of letters and digits, w is the count of words and row is the content of the line.


Example:

// file input.txt
You have been in the pipeline
Filling in time
Provided with toys and ‘scouting for boys’
You brought a guitar to punish your ma
And you didn’t like school
And you know you are nobody fool
So welcome to the machine

Output:
24, 6: You have been in the pipeline
13, 3: Filling in time
34, 7: Provided with toys and ‘scouting for boys’
31, 8: You brought a guitar to punish your ma
22, 6: And you didn’t like school
26, 7: And you know you are nobody fool
21, 5: So welcome to the machine

## Task 3

The file matrica.txt contains the elements of an integer matrix (A). The number of rows  n and the number of columns m of the matrix (n, m < 120) are written in the first line of the file. After them, in each line of the file, the elements of each row of the matrix are written.

Print the number of index numbers in each column.

An element in a matrix is considered for index number if its value is identical with the value that is obtained by concatenation of the index of the row and the index of the column of the element.




Help:

Index element: The value of the element Aij is the same with ij as a number.

- If i=10, j=31, the element Aij should have the value of 1031 in order to be an index number.

Example:

Input: // file matrica.txt

4  5

0    1    2    3    4

5    6    7    8    9

10  21  22  23  11

0    1    2    33    4

Output:

1

2

2

3

1


Explanation:

In the matrix A , index elements are:

0 column: 0

1st column: 1, 21

2nd column: 2, 22

3rd column: 3, 23, 33

4th column: 4
