#!/bin/sh

#  getdata.sh
#  
#
#  Created by Tim Havelka on 9/25/14.
#

FIRST_ARGUMENT="$1"
echo "Runtime and comparisons for $FIRST_ARGUMENT"
echo "Running time for $FIRST_ARGUMENT with e2inc"
./Sort -a $FIRST_ARGUMENT -f e2inc.txt -t -c
echo""

echo "Runtime and comparisons for $FIRST_ARGUMENT"
echo "Running time for $FIRST_ARGUMENT with e3inc"
./Sort -a $FIRST_ARGUMENT -f e3inc.txt -t -c
echo""

echo "Runtime and comparisons for $FIRST_ARGUMENT"
echo "Running time for $FIRST_ARGUMENT with e4inc"
./Sort -a $FIRST_ARGUMENT -f e4inc.txt -t -c
echo""

echo "Runtime and comparisons for $FIRST_ARGUMENT"
echo "Running time for $FIRST_ARGUMENT with e5inc"
./Sort -a $FIRST_ARGUMENT -f e5inc.txt -t -c
echo""

echo "Runtime and comparisons for $FIRST_ARGUMENT"
echo "Running time for $FIRST_ARGUMENT with e2dec"
./Sort -a $FIRST_ARGUMENT -f e2dec.txt -t -c
echo""

echo "Runtime and comparisons for $FIRST_ARGUMENT"
echo "Running time for $FIRST_ARGUMENT with e3dec"
./Sort -a $FIRST_ARGUMENT -f e3dec.txt -t -c
echo""

echo "Runtime and comparisons for $FIRST_ARGUMENT"
echo "Running time for $FIRST_ARGUMENT with e4dec"
./Sort -a $FIRST_ARGUMENT -f e4inc.txt -t -c
echo""

echo "Runtime and comparisons for $FIRST_ARGUMENT"
echo "Running time for $FIRST_ARGUMENT with e5dec"
./Sort -a $FIRST_ARGUMENT -f e5inc.txt -t -c
echo""

echo "Runtime and comparisons for $FIRST_ARGUMENT"
echo "Running time for $FIRST_ARGUMENT with e2rand"
./Sort -a $FIRST_ARGUMENT -f e2rand.txt -t -c
echo""

echo "Runtime and comparisons for $FIRST_ARGUMENT"
echo "Running time for $FIRST_ARGUMENT with e3rand"
./Sort -a $FIRST_ARGUMENT -f e3rand.txt -t -c
echo""

echo "Runtime and comparisons for $FIRST_ARGUMENT"
echo "Running time for $FIRST_ARGUMENT with e4rand"
./Sort -a $FIRST_ARGUMENT -f e4rand.txt -t -c
echo""

echo "Runtime and comparisons for $FIRST_ARGUMENT"
echo "Running time for $FIRST_ARGUMENT with e5rand"
./Sort -a $FIRST_ARGUMENT -f e5rand.txt -t -c
echo""

