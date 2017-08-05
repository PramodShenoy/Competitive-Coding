t= int(input())
nos=[1,2,3,4,5,6,7]

for test in range(t):
	n = int(input())
	l = list(map(int,input().split(' ')))
	count=0
	i=0
	if n >= 7 and n%2==1:
		while i<n:
			if l[i]==l[n-i-1] and l[i] in nos:
				count=count+1
				i=i+1
			else:
				break
		if count==n:
			print("yes")
		else:
			print("no")
		i=0
	else:
		print("no")