import sys

m=1000000007
t=int(input())

for x in range(t):
	f=0
	l=list(input().split())
	a=list(map(int, input().split(' ')))#x
	b=list(map(int, input().split(' ')))#y
	c=list(map(int, input().split(' ')))#z
	for i in a:
		for j in b:
			for k in c:
				if(j>=i and j>=k):
					f+=(i+j)*(j+k)
	f=f%m
	print(f)
	f=0






