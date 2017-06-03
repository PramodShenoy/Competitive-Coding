import sys
import numpy as np

t=int(input())
for i in range(t):
	n=int(input())
	a=[499]
	for j in range(n-1):
		num=a[j]-2
		a.append(num)
	print(*a)



