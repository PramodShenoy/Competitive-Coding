import sys
import numpy as np

def uni(a, b):
    """ return the union of two lists """
    return list(set(a) | set(b))

def cmp(a, b):
    return (a > b) - (a < b) 

t=int(input())

for i in range(t):
	d=list(map(int, input().split(' ')))
	#d[0]=n , d[1] = k
	k=np.arange(1,d[1]+1)
	k=k.tolist()
	#print(k)
	l=[]
	count = 0
	for j in range(d[0]):
		a=list(map(int, input().split(' ')))
		a=a[1:]
		l.append(a)
	for x in range(len(l)):
		y=x+1
		while(y<len(l)):
			u=uni(l[x],l[y])
			if(cmp(u,k)==0):
				count+=1
			y=y+1
	print(count)

