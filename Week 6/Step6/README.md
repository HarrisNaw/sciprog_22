# Steps to run the code.

The code is in C langauge with the compiled versions of it. Below are the commands used to run the code.

<strong>Week 6</strong> <br>
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
