def invert(arr,start,end):
	i = start - 1 
	j = end - 1
	while i<=j:
		arr[i] = 1-arr[i]
		i+=1
	return arr

n,q = ((input().split()))
n = int(n)
q = int(q)
arr = [0]*n
m = -1
for i in range(q):
	lt = list(map(int, input().split(' ')))
	arr = invert(arr,lt[0],lt[1])
	s = ''.join(map(str, arr))
	s = int(s)
	if s>m:
		m=s
print(m)
