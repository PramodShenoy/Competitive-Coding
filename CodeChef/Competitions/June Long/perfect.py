import sys
import numpy as np

t=int(input())
for i in range(t):
	n=int(input())
	a=(np.random.randint(1,500,n))
	a=np.sort(a,kind='quicksort')
	for j in range(len(a)-1):
		s=a[j]+a[j+1]
		i,=np.where(a==s)
		if(len(i)!=0):
			a[i]=a[i]+1
		#a=np.unique(a)
	print(*a)




