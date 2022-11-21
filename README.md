# Steps to run the code in each file.

Each folder contains the code in C langauge and the compiled versions of it. Below are the commands used to run the code in respective folder.

<strong>Week 2</strong> </br>
$ gcc -o Conversion Conversion.c -lm <br>
$ ./Conversion <br>
<Strong>Output</Strong> <br>
The number of digits is 25 <br>
inum=33554431,  fnum=33554432.000000, inum in binary=1111111111111111111111111 <br>
 <br>
$ gcc -o Sum Sum.c <br>
$ ./Sum <br>
<strong>Output</strong> <br>
 Sum1=7.485478 <br>
 Sum2=7.485472 <br>
 Difference between the two is 0.000007 <br>
 <br>
<strong>Week 3 </strong><br>
$ gcc -o Trapezoidal Trapezoidal.c -lm <br>
$ ./Trapezoidal  <br>
<Strong>Output</Strong> <br>
Trapezoidal result: 0.695045 <br>
log(2) result: 0.693147 <br>
 <br>
<strong>Week 4</strong> <br>
$ gcc -o Practical4 Practical4.c -lm <br>
$ ./Practical4  <br>
<strong>Output</strong> <br>
Result: 0.695045 <br>
Actual value: 0.693147 <br>
 <br>
<strong>Week 5</strong> <br>
$ gcc -o Fibonacci Fibonacci.c <br>
$ ./Fibonacci  <br>
<Strong>Output</Strong> <br>
Enter Value: 5 <br>
Fibonacci of 5 is 5 <br>
 <br>
$ gcc -o Maclaurin Maclaurin.c -lm <br>
$ ./Maclaurin  <br>
<Strong>Output</Strong> <br>
Enter the precision for Maclaurin Series: 0.1 <br>
The difference at x = -0.900000 between them is 1.2940859075 <br>
The difference at x = -0.800000 between them is 0.8671285782 <br>
The difference at x = -0.700000 between them is 0.6213395965 <br>
The difference at x = -0.600000 between them is 0.4792925465 <br>
The difference at x = -0.500000 between them is 0.3542130679 <br>
The difference at x = -0.400000 between them is 0.2577284087 <br>
The difference at x = -0.300000 between them is 0.1788570762 <br>
The difference at x = -0.200000 between them is 0.1116376630 <br>
The difference at x = -0.100000 between them is 0.0526822722 <br>
The difference at x = -0.000000 between them is 0.0000000000 <br>
The difference at x = 0.100000 between them is 0.0479904376 <br>
The difference at x = 0.200000 between them is 0.0912266658 <br>
The difference at x = 0.300000 between them is 0.1317017364 <br>
The difference at x = 0.400000 between them is 0.1705517152 <br>
The difference at x = 0.500000 between them is 0.2103720317 <br>
The difference at x = 0.600000 between them is 0.2561489952 <br>
The difference at x = 0.700000 between them is 0.2846673199 <br>
The difference at x = 0.800000 between them is 0.3563029545 <br>
The difference at x = 0.900000 between them is 0.4637203041 <br>
 <br>
<strong>Week 6</strong> <br>
$ gcc -o MatrixMul MatrixMul.c <br>
$ ./MatrixMul  <br>
<Strong>Output</Strong> <br>
Matrix A <br>
  0&emsp;1&emsp;2  <br> 
  1&emsp;2&emsp;3   <br>
  2&emsp;3&emsp;4   <br>
  3&emsp;4&emsp;5   <br>
  4&emsp;5&emsp;6   <br>
Matrix B <br>
  0&emsp;-1&emsp;-2&emsp;-3   <br>
  1&emsp;&nbsp;0&emsp;-1&emsp;-2   <br>
  2&emsp;&nbsp;1&emsp;&nbsp;0&emsp;-1   <br>
Matrix C <br>
  5&emsp;2&emsp;&nbsp;-1&emsp;&nbsp;&nbsp;-4   <br>
  8&emsp;2&emsp;&nbsp;-4&emsp;&nbsp;-10   <br>
 11&emsp;2&emsp;&nbsp;-7&emsp;&nbsp;-16   <br>
 14&emsp;2&emsp;-10&emsp;&nbsp;-22   <br>
 17&emsp;2&emsp;-13&emsp;&nbsp;-28   <br>
 <br>
<strong>Use of Makefile</strong> <br>
$ make clean <br>
<strong>Output</strong> <br>
rm *.o <br>
$ make <br>
<strong>Output</strong> <br>
cc -c -O3 main.c <br>
cc -o mmc main.o -lm <br>
$ ./mmc <br>
<strong>Output</strong> <br>
Matrix A <br>
  0&emsp;1&emsp;2 <br>
  1&emsp;2&emsp;3 <br>
  2&emsp;3&emsp;4 <br>
  3&emsp;4&emsp;5 <br>
  4&emsp;5&emsp;6 <br>
Matrix B <br>
  0&emsp;-1&emsp;-2&emsp;-3   <br>
  1&emsp;&nbsp;0&emsp;-1&emsp;-2   <br>
  2&emsp;&nbsp;1&emsp;&nbsp;0&emsp;-1   <br>
Matrix C <br>
  5&emsp;2&emsp;&nbsp;-1&emsp;&nbsp;&nbsp;-4   <br>
  8&emsp;2&emsp;&nbsp;-4&emsp;&nbsp;-10   <br>
 11&emsp;2&emsp;&nbsp;-7&emsp;&nbsp;-16   <br>
 14&emsp;2&emsp;-10&emsp;&nbsp;-22   <br>
 17&emsp;2&emsp;-13&emsp;&nbsp;-28   <br>
 <br>
<strong>Week 7</strong> <br>
$ gcc -o Practical7 Practical7.c <br>
$ ./Practical7  <br>
<strong>Output</strong> <br>
Enter polynomial order: 13 <br>
e term for order 13 is 1.00000000000000 <br>
e term for order 13 is 0.50000000000000 <br>
e term for order 13 is 0.16666666666667 <br>
e term for order 13 is 0.04166666666667 <br>
e term for order 13 is 0.00833333333333 <br>
e term for order 13 is 0.00138888888889 <br>
e term for order 13 is 0.00019841269841 <br>
e term for order 13 is 0.00002480158730 <br>
e term for order 13 is 0.00000275573192 <br>
e term for order 13 is 0.00000027557319 <br>
e term for order 13 is 0.00000002505211 <br>
e term for order 13 is 0.00000000208768 <br>
e term for order 13 is 0.00000000051758 <br>
e is estimated as 2.71828182880375, with difference 0.00000000034471 <br>
 <br>
$ gcc -o PtrsAndMemAlloc PtrsAndMemAlloc.c <br>
$ ./PtrsAndMemAlloc  <br>
<strong>Output</strong> <br>
Enter size of array: 5 <br>
a[0]=1 <br>
a[1]=1 <br>
a[2]=1 <br>
a[3]=1 <br>
a[4]=1 <br>
 <br>
<strong>Week 8</strong> <br>
$ gcc -o Practical8 Practical8.c  <br>
$ ./Practical8  <br>
<strong>Output</strong> <br>
Enter 1st value: 10 <br>
Enter 2nd value: 8 <br>
GCD of 10 & 8 <br>
Recursive result: 2.000000 <br>
Iterative result: 2.000000 <br>
 <br>
