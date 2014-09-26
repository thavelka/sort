sort
====

Five integer sorting algorithms for UNIX, written in C++

To build, simply use `make` in the main directory

The program usage is as follows. Note that options do not need to be specified in a fixed order. 

####Usage
```
./sort [-a ALGORITHM] [-f INPUTFILE] [-o OUTPUTFILE] [-h] [-d] [-p] [-t] [-c]

Options:
-a ALGORITHM: Use ALGORITHM to sort.
ALGORITHM is a single character representing an algorithm: 

S for selection sort
B for bubble sort
I for insertion sort
H for shell sort 
R for radix sort

-f INPUTFILE: Obtain integers from INPUTFILE instead of STDIN
-o OUTPUTFILE: Place output data into OUTPUTFILE instead of STDOUT -h: Display this help and exit
-d: Display input: unsorted integer sequence
-p: Display output: sorted integer sequence
-t: Display running time of the chosen algorithm in milliseconds -c: Display number of comparisons (excluding radix sort)
```

####Example
```
./sort -h
./sort -a S -f input.txt -o output.txt -d -t -c -p 
./sort -a I -t -c
./sort

```
