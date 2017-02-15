#https://www.hackerrank.com/challenges/compare-the-triplets

#!/bin/python

import sys


a0,a1,a2 = raw_input().strip().split(' ')
a0,a1,a2 = [int(a0),int(a1),int(a2)]
b0,b1,b2 = raw_input().strip().split(' ')
b0,b1,b2 = [int(b0),int(b1),int(b2)]

A=0
B=0
if a0>b0:
    A+=1
elif b0>a0:
    B+=1
       
if a1>b1:
    A+=1
elif b1>a1:
    B+=1
    
if a2>b2:
    A+=1
elif b2>a2:
    B+=1

print A,B



