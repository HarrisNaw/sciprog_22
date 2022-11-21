# Steps to run the code in each file.

Each folder contains the code in C langauge and the compiled versions of it. Below are the commands used to run the code in respective folder.

# Week 2
$ gcc -o Conversion Conversion.c -lm 
$ ./Conversion
**Output**
The number of digits is 25
inum=33554431,  fnum=33554432.000000, inum in binary=1111111111111111111111111

$ gcc -o Sum Sum.c
$ ./Sum
**Output**
 Sum1=7.485478
 Sum2=7.485472
 Difference between the two is 0.000007

# Week 3
$ gcc -o Trapezoidal Trapezoidal.c -lm
$ ./Trapezoidal 
**Output**
Trapezoidal result: 0.695045
log(2) result: 0.693147

# Week 4
$ gcc -o Practical4 Practical4.c -lm
$ ./Practical4 
**Output**
Result: 0.695045
Actual value: 0.693147

# Week 5
$ gcc -o Fibonacci Fibonacci.c
$ ./Fibonacci 
**Output**
Enter Value: 5
Fibonacci of 5 is 5

$ gcc -o Maclaurin Maclaurin.c -lm
$ ./Maclaurin 
**Output**
Enter the precision for Maclaurin Series: 0.1
The difference at x = -0.900000 between them is 1.2940859075
The difference at x = -0.800000 between them is 0.8671285782
The difference at x = -0.700000 between them is 0.6213395965
The difference at x = -0.600000 between them is 0.4792925465
The difference at x = -0.500000 between them is 0.3542130679
The difference at x = -0.400000 between them is 0.2577284087
The difference at x = -0.300000 between them is 0.1788570762
The difference at x = -0.200000 between them is 0.1116376630
The difference at x = -0.100000 between them is 0.0526822722
The difference at x = -0.000000 between them is 0.0000000000
The difference at x = 0.100000 between them is 0.0479904376
The difference at x = 0.200000 between them is 0.0912266658
The difference at x = 0.300000 between them is 0.1317017364
The difference at x = 0.400000 between them is 0.1705517152
The difference at x = 0.500000 between them is 0.2103720317
The difference at x = 0.600000 between them is 0.2561489952
The difference at x = 0.700000 between them is 0.2846673199
The difference at x = 0.800000 between them is 0.3563029545
The difference at x = 0.900000 between them is 0.4637203041

# Week 6
$ gcc -o MatrixMul MatrixMul.c
$ ./MatrixMul 
**Output**
Matrix A
  0    1    2  
  1    2    3  
  2    3    4  
  3    4    5  
  4    5    6  
Matrix B
  0   -1   -2   -3  
  1    0   -1   -2  
  2    1    0   -1  
Matrix C
  5    2   -1   -4  
  8    2   -4  -10  
 11    2   -7  -16  
 14    2  -10  -22  
 17    2  -13  -28  

**Use of Makefile**
$ make
**Output**
cc -c -O3 main.c
cc -o mmc main.o -lm
$ ./mmc
**Output**
Matrix A
  0    1    2  
  1    2    3  
  2    3    4  
  3    4    5  
  4    5    6  
Matrix B
  0   -1   -2   -3  
  1    0   -1   -2  
  2    1    0   -1  
Matrix C
  5    2   -1   -4  
  8    2   -4  -10  
 11    2   -7  -16  
 14    2  -10  -22  
 17    2  -13  -28

# Week 7
$ gcc -o Practical7 Practical7.c
$ ./Practical7 
**Output**
Enter polynomial order: 13
e term for order 13 is 1.00000000000000
e term for order 13 is 0.50000000000000
e term for order 13 is 0.16666666666667
e term for order 13 is 0.04166666666667
e term for order 13 is 0.00833333333333
e term for order 13 is 0.00138888888889
e term for order 13 is 0.00019841269841
e term for order 13 is 0.00002480158730
e term for order 13 is 0.00000275573192
e term for order 13 is 0.00000027557319
e term for order 13 is 0.00000002505211
e term for order 13 is 0.00000000208768
e term for order 13 is 0.00000000051758
e is estimated as 2.71828182880375, with difference 0.00000000034471

$ gcc -o PtrsAndMemAlloc PtrsAndMemAlloc.c
$ ./PtrsAndMemAlloc 
**Output**
Enter size of array: 5
a[0]=1
a[1]=1
a[2]=1
a[3]=1
a[4]=1


# Week 8
$ gcc -o Practical8 Practical8.c 
$ ./Practical8 
**Output**
Enter 1st value: 10
Enter 2nd value: 8
GCD of 10 & 8
Recursive result: 2.000000
Iterative result: 2.000000

