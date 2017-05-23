#!/bin/python3

import sys


n = int(input().strip())
height = list(map(int, input().strip().split(' ')))
m=max(height)
count=0
for i in height:
    if i==m:
        count+=1
print(count)
