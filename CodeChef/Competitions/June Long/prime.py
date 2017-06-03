import sys
import math

def isPrime(a):
	flag=0
	if a==2 or a==3:
		return True
	for i in range(2,math.ceil(math.sqrt(a))):
		if a%i==0:
			flag=0
			return False
		else:
			flag=1
	if flag==1:
		return True

def func(l,r,x,y):
	result=0
	for i in range(x,y+1):
		#print(i)
		if(isPrime(i)==True):
			for j in range(l,r+1):
				number=a[j-1]
				exp=0
				while(number%i==0):
					exp+=1
					number=number/i
				result=result+exp
	return result

n=int(input())
a=list(map(int, input().split(' ')))
q=int(input())
for s in range(q):
	lrxy=list(map(int, input().split(' ')))
	print(func(lrxy[0],lrxy[1],lrxy[2],lrxy[3]))