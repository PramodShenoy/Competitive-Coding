#!/bin/python3

import sys


n = int(input().strip())
c = [int(c_temp) for c_temp in input().strip().split(' ')]
c.sort()
pair=0
i=0
while(i<n-1):
    if c[i]==c[i+1]:
        i=i+1
        pair=pair+1
    i=i+1
print(pair)
