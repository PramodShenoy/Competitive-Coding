import sys

n = int(input())
arr=[]
for i in range(n):
	s=input()
	arr.append(s)
q = int(input())
for i in range(q):
    count=0
    s=input()
    for j in arr:
        if s==j:
            count+=1
    print(count)